// 多态：不同对象，相同消息，不同反应（不同实现）
// 属于重载多态

// 重载函数 Double(x), 返回值是输入参数的两倍
// 参数分别为：整型，长整型，浮点型，双精度型
// 返回值类型与参数一样

#include <iostream>
using namespace std;

int Double(int x)
{
    return x * 2;
}

long int Double(long int x)
{
    return x * 2;
}

float Double(float x)
{
    return x * 2;
}

double Double(double x)
{
    return x * 2;
}

int main()
{
    int myInt = 6500;
    long myLong = 65000;
    float myFloat = 6.5F;
    double myDouble = 6.5e20;

    cout << "myInt: " << myInt << endl;
    cout << "myLong: " << myLong << endl;
    cout << "myFloat: " << myFloat << endl;
    cout << "myDouble: " << myDouble << endl;

    int doubleInt;
    long doubleLong;
    float doubleFloat;
    double doubleDouble;

    doubleInt = Double(myInt);
    doubleLong = Double(myLong);
    doubleFloat = Double(myFloat);
    doubleDouble = Double(myDouble);

    cout << "doubleInt: " << doubleInt << endl;
    cout << "doubleLong: " << doubleLong << endl;
    cout << "doubleFloat: " << doubleFloat << endl;
    cout << "doubleDouble: " << doubleDouble << endl;

    return 0;
}
