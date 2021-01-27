
#include <iostream>
#include <cstring>
using namespace std;

void reverse(char *i, char *j)
{
    char c;
    if (i < j)
    {
        c = *i;
        *i = *j;
        *j = c;
        reverse(++i, --j);
    }
}

void reverse(char *s)
{
    reverse(s, s + strlen(s) - 1);
}

int main()
{
    char str[20];
    cout << "请输入一个字符串: ";
    cin >> str;
    cout << "字符串反转之前: " << str << endl;
    reverse(str);
    cout << "字符串反转之后: " << str << endl;
    return 0;
}
