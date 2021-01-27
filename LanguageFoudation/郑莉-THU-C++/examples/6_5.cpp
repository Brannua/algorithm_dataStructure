// 指针的定义，赋值，使用

#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int *ptr = &i;
    cout << "i = " << i << endl;
    cout << "*ptr = " << *ptr << endl;
    i = 9;
    cout << "i = " << i << endl;
    cout << "*ptr = " << *ptr << endl;
    return 0;
}
