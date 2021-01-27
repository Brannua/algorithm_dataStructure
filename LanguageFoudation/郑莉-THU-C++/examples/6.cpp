#include <iostream>
#include <string>
using namespace std;

void foo()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int *fn()
{
    int *p = new int(5);
    return p;
}

void foo2()
{
    int *a = fn();
    cout << *a << endl;
    delete a;
}

int count(const string &p)
{
    int num = 0;
    for (int i = 0; p[i]; i++)
    {
        if (p[i] >= 'a' && p[i] <= 'z' || p[i] >= 'A' && p[i] <= 'Z')
        {
            num++;
        }
    }
    return num;
}

void foo3()
{
    string text;
    cout << "请输入一个英文句子: ";
    getline(cin, text);
    cout << "输入的英文句子的字母个数为: " << count(text) << endl;
}

int main()
{
    // foo();
    // foo2();
    // foo3();
    return 0;
}
