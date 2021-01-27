// 访问对象的公有成员函数的不同方式

#include <iostream>
using namespace std;

class Point
{
public:
    Point(int iniX = 0, int iniY = 0) : x(iniX), y(iniY){};
    int getX() const { return x; };
    int getY() const { return y; };

private:
    int x, y;
};

int main()
{
    Point a(4, 5);
    Point *p1 = &a;
    cout << a.getX() << endl;
    cout << p1->getX() << endl;

    int (Point::*funcPtr)() const = &Point::getX; // 定义成员函数指针并初始化
    cout << (a.*funcPtr)() << endl;
    cout << (p1->*funcPtr)() << endl;

    return 0;
}
