/**
 * @desc 例 4-4 类的组合，定义线段 Line 类来描述线段，使用 Point 类的对象来表示端点
 * 这个问题可以用类的组合来解决，使 Line 类包括 Point 类的两个对象 p1 和 p2，作为其数据成员
 * Line 类具有计算线段长度的功能，在构造函数中实现
 */
#include <iostream>
#include <cmath>
using namespace std;

// 坐标点类
class Point
{
public: // 接口函数都定义成了内联函数，构造函数声明默认参数
    Point(int iniX = 0, int iniY = 0)
    {
        x = iniX;
        y = iniY;
        cout << "calling the Point constructor..." << endl;
    }
    Point(Point &p)
    {
        x = p.x;
        y = p.y;
        cout << "calling the Point copy constructor..." << endl;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
private:
    int x;
    int y;
};

// 线段类
class Line {
public:
    Line(Point &a, Point &b); // 接口: 线段的构造函数
    Line(Line &line); // 接口: 线段的复制构造函数
    double getLen(); // 接口: 获取线段长度
    
private:
    // 线段的两点
    Point p1;
    Point p2;
    // 线段的长度
    double len;
};

Line::Line(Point &a, Point &b):p1(a), p2(b)
{
    double x = static_cast<double>(p1.getX() - p2.getX());
    double y = static_cast<double>(p1.getY() - p2.getY());
    len = sqrt(x * x + y * y);
    cout << "calling the Line constructor..." << endl;
}

Line::Line(Line &line):p1(line.p1), p2(line.p2)
{
    len = line.len;
    cout << "calling the Line copy constructor..." << endl;
}

double Line::getLen()
{
    return len;
}

int main()
{
    Point a(1, 1), b(4, 5);
    Line foo(a, b);
    Line foo2(foo);
    cout << foo.getLen() << endl;
    cout << foo2.getLen() << endl;
    return 0;
}

// 1. 如果函数的形参是类的对象且实参传给形参的是值，而不是引用，调用函数进行形参实参相结合时，会调用复制构造函数，本例中传了引用，因为这样高效
// 2. 当用类的一个对象去初始化该类的另一个对象时，会调用复制构造函数，比如本例中 Line 的构造函数和拷贝构造函数的初始化列表初始化内嵌对象时
// 3. 如果函数的返回值是类的对象，函数执行完返回调用者时，会调用复制构造函数，本例中没有体现

// 参考: https://github.com/Brannua/cpp_practise/commit/fcc889cf83cac7a2b37e0fd66a88131e28d5a80b
