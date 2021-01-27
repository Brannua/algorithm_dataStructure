#include <iostream>
#include <cmath>
using namespace std;

class Point {
    int x, y;
public:
    Point(int a, int b): x(a), y(b) {}
    friend double getDistance(Point &, Point &);
};

double getDistance(Point & p1, Point & p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main()
{
    // Point pArr[3] = {Point(0, 3), Point(4, 0)}; // 这样会报错啊！！！
    // cout << getDistance(pArr[0], pArr[1]) << endl;
    Point a(0, 3), b(4, 0);
    cout << getDistance(a, b) << endl;
    return 0;
}
