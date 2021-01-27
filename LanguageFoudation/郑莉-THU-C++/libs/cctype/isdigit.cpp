/**
 * int isdigit(int x)
 * 检查传入的字符是否是十进制数字字符
 * 如果字符 x 是一个十进制数字字符，则该函数返回非零值，否则返回 0
 */

#include <cctype>
#include <iostream>
using namespace std;

int main() {
    int a = 1;      cout << isdigit(a) << " ";
    float b = 2.0;  cout << isdigit(b) << " ";
    double c = 3.0; cout << isdigit(c) << " ";

    char d = 'd';   cout << isdigit(d) << " ";

    int e = '4';    cout << isdigit(e) << " ";
    int f = 'f';    cout << isdigit(f) << " ";
    int g = '\t';   cout << isdigit(g) << " ";
    int h = ' ';    cout << isdigit(h) << " ";

    return 0;
}
