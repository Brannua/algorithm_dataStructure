// 例 5-2 变量的生存期与可见性

#include <iostream>
using namespace std;

int i = 1;

void other()
{
    static int a = 2;
    static int b;

    int c = 10;

    a += 2;
    i += 32;
    c += 5;

    cout << "-----other-----" << endl;
    cout << "i: " << i << "a: " << a << "b: " << b << "c: " << c << endl;
}

int main()
{
    static int a;

    int b = -10;
    int c = 0;
    cout << "-----main-----" << endl;
    cout << "i: " << i << "a: " << a << "b: " << b << "c: " << c << endl; // 1   0   -10   0
    c += 8;
    other(); // 33   4   0   15
    cout << "-----main-----" << endl;
    cout << "i: " << i << "a: " << a << "b: " << b << "c: " << c << endl; // 33   0   -10   8
    i += 10;
    other(); // 75   6   0   15

    return 0;
}
