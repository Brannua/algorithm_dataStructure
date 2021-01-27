/**
 * 例 5-9 常引用做形参
 * Tips: 基于 例 5-6 使用友元函数计算任意两点间的距离
 */

#include <iostream>
#include <cmath>
using namespace std;

class Point
{
public:
    Point(int newX = 0, int newY = 0): x(newX), y(newY) {};
    friend double getDistance(const Point &p1, const Point & p2);
private:
    int x, y;
};

double getDistance(const Point &p1, const Point & p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

int main()
{
    const Point p1(1, 1), p2(2, 2);
    cout << getDistance(p1, p2) << endl;
    return 0;
}
