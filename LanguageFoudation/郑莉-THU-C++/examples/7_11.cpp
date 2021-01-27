// 定义一个基类 BaseClass，从它派生出类 DerivedClass
// BaseClass 有成员函数 fn1(), fn2(),
// DerivedClass 有成员函数 fn1(), fn2()

// 主程序定义一个 DerivedClass 的对象
// 分别用 DerivedClass 的对象以及 BaseClass 和 DerivedClass 的指针来调用 fn1,fn2,观察结果

#include <iostream>
using namespace std;

class BaseClass
{
public:
    BaseClass(){};
    ~BaseClass(){};
    void fn1() { cout << "BaseClass fn1" << endl; };
    void fn2() { cout << "BaseClass fn2" << endl; };
};

class DerivedClass : public BaseClass
{
public:
    DerivedClass(){};
    ~DerivedClass(){};
    void fn1() { cout << "DerivedClass fn1" << endl; };
    void fn2() { cout << "DerivedClass fn2" << endl; };
};

int main()
{
    DerivedClass foo;
    foo.fn1();
    foo.fn2();

    BaseClass *ptr1 = &foo;
    DerivedClass *ptr2 = &foo;

    ptr1->fn1();
    ptr1->fn2();

    ptr2->fn1();
    ptr2->fn2();
    return 0;
}