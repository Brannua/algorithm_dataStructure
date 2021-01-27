

// 例 5-3 具有静态和动态生存期对象的时钟程序

/**
 * @desc 以时钟类为例
 * 在这个实例中，声明了具有（函数原型作用域，局部作用域，类作用域，和命名空间作用域）的多个对象
 * 具体分析它们各自的可见性和生存期
 */
#include <iostream>
using namespace std;

class Clock
{
public:
    Clock() : hour(0), minute(0), second(0){};
    Clock(Clock &c) : hour(c.hour), minute(c.minute), second(c.second){};
    void setTime(int newH, int newM, int newS);
    void showTime();

private:
    int hour, minute, second;
};

void Clock::setTime(int newH, int newM, int newS)
{
    hour = newH;
    minute = newM;
    second = newS;
}

void Clock::showTime()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

Clock globClock; // 具有静态生存期，命名空间作用域

int main()
{
    globClock.showTime();
    globClock.setTime(8, 30, 30); // 对象的成员函数具有类作用域

    Clock myClock(globClock);
    myClock.showTime();

    return 0;
}
