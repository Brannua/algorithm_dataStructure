/**
 * 例 5-8 常数据成员举例
 */

#include <iostream>
using namespace std;

class A
{
public:
    A(int i);
    void print();
private:
    const int a;
    const int b;
    // const int b = 10; // 其实类中常量成员变量的初始化推荐在类外进行 && 类中的静态成员变量必须在类外初始化
                         // 但是 C++规定: 类的静态常量 如果具有整数类型或枚举类型，那么可以直接在类定义中为它指定常量值
    static const int c = 1;
};

A::A(int i) : a(i), b(10) {} // 常数据成员如果在类外初始化，则只能通过初始化表来获得初值

void A::print()
{
    cout << a << " : " << b << " : " << c << endl;
}

int main()
{
    A foo(100);
    foo.print();
    return 0;
}
