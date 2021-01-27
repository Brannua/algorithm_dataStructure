// 虚析构函数

#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base() { cout << "Base destructor." << endl; }
};

class Derived : public Base
{
public:
    ~Derived() { cout << "Derived destructor." << endl; }
};

void fun(Base *ptr)
{
    delete ptr;
}

int main()
{
    Base *ptr = new Derived();
    fun(ptr);
    return 0;
}
