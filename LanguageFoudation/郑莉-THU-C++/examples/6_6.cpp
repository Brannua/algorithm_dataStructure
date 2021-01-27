// void 类型指针的使用

#include <iostream>
using namespace std;

int main()
{
    // void voidObject; // Error, 不能声明 void 类型的变量
    int i = 5;
    void* pv;
    pv = &i;
    int* pint = (int*)(pv);
    cout << "*pint = " << *pint << endl;
    return 0;
}
