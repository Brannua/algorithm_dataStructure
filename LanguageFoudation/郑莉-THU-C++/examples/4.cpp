// 设计一个钟表类，实现设置时间和显示时间的功能
#include <iostream>
using namespace std;

class Clock {
    public:
        // 这里的构造函数有两种重载形式：有参数的和无参数的（即默认构造函数）
        Clock(int iniH, int iniM, int iniS);
        Clock()
        {
            h = 0;
            m = 0;
            s = 0;
        }
        // 复制(拷贝)构造函数
        Clock(Clock &c);
        // 添加一个空的内联析构函数，其功能和系统自动生成的隐含析构函数相同
        ~Clock(){};
        void setTime(int h = 0, int m = 0, int s = 0);
        void showTime();
    private:
        int h;
        int m;
        int s;
};

Clock::Clock(int iniH, int iniM, int iniS)
{
    h = iniH;
    m = iniM;
    s = iniS;
}

void Clock::setTime(int newH, int newM, int newS)
{
    h = newH;
    m = newM;
    s = newS;
}

inline void Clock::showTime()
{
    cout << h << ":" << m << ":" << s << endl;
}

Clock::Clock(Clock &c)
{
    h = c.h;
    m = c.m;
    s = c.s;
    cout << "Calling the copy constructor..." << endl;
}

void testCopy(Clock a)
{
    cout << "testCopy" << endl;
}

void testCopy_2(Clock &a)
{
    cout << "testCopy_2" << endl;
}

Clock testCopy_3()
{
    Clock c;
    cout << "testCopy_3" << endl;
    return c;
}

int main()
{
    Clock foo(0, 0, 0); // 调用有参数的构造函数
    Clock foo2;         // 调用无参数的构造函数（即默认构造函数）
    foo.showTime();
    foo.setTime(18, 20, 30);
    foo.showTime();

    // 1. 当用类的一个对象去初始化该类的另一个对象时，会调用复制构造函数
    // Tips: 以下对 foo3 和 foo4 的初始化都能够调用复制构造函数，两种写法只是形式上有所不同，执行的操作完全相同
    Clock foo3(foo);
    Clock foo4 = foo;

    // 2. 如果函数的形参是类的对象，调用函数进行形参实参相结合时，会调用复制构造函数
    testCopy(foo);
    // Tips: 只有把对象用值传递时，才会调用复制构造函数，如果传递引用，则不会调用复制构造函数，所以，传递比较大的对象时，传引用比传值的效率高
    testCopy_2(foo);

    // 3. 如果函数的返回值是类的对象，函数执行完返回调用者时，会调用复制构造函数
    Clock foo5;
    foo5 = testCopy_3();

    // 注意！！: 编译环境不同，运行结果可能会不同，因为编译器有时会针对复制构造函数的调用做优化，避免不必要的复制构造函数的调用
    return 0;
}
