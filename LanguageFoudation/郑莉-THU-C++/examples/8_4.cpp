// 虚函数成员

/*
    如果派生类没有显示地给出虚函数声明
    这时系统就会遵循以下规则判断派生类的一个函数成员是不是虚函数
    1. 该函数是否与基类的虚函数同名
    2. 该函数是否与基类的虚函数有相同的参数个数以及相同的对应参数类型
    3. 该函数是否与基类的虚函数有相同的返回值或者满足赋值兼容规则的指针，引用型的返回值

    这三个条件都满足，就会自动确定为虚函数
    这时，派生类的虚函数便覆盖了基类的虚函数
    并且派生类中的虚函数还会隐藏基类中同名函数的所有其他重载形式
*/

#include <iostream>
using namespace std;

class Base1
{
public:
    virtual void display() const;
};

void Base1::display() const
{
    cout << "Base1::display()" << endl;
}

class Base2 : public Base1
{
    void display() const;
};

void Base2::display() const {
    cout << "Base2::display()" << endl;
}

class Derived : public Base2 {
public:
    void display() const;
};

void Derived::display() const {
    cout << "Derived::display()" << endl;
}

void fun(Base1 * ptr) {
    // 通过基类类型的指针就可以访问到正在指向的对象的成员
    ptr->display();
}

int main()
{
    Base1 base1;
    Base2 base2;
    Derived derived;
    fun(&base1);
    fun(&base2);
    fun(&derived);
    return 0;
}

// 实现了运行时多态
// 1. 满足赋值兼容规则
// 2. Base1 的函数成员 display 声明为虚函数
// 3. 程序中使用对象指针来访问函数成员
