/**
 * 多继承同名隐藏举例
 */

#include <iostream>
using namespace std;

class Base1 {
public:
    int var;
    void fun() { cout << "Member of Base1." << endl; }
};

class Base2 {
public:
    int var;
    void fun() { cout << "Member of base2." << endl; }
};

class Derived:public Base1, public Base2 {
public:
    int var;
    void fun() { cout << "Member of Derived." << endl; }
};

int main() {
    Derived d;
    Derived * p = &d;

    d.var = 1;
    d.fun();            // Member of Derived.
    d.Base1::var = 2;
    d.Base1::fun();     // Member of Base1.
    p->Base2::var = 3;
    p->Base2::fun();    // Member of base2.

    return 0;
}
