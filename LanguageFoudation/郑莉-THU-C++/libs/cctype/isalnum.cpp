/**
 * int isalnum(int x)
 * 检查传入的字符是否是字母或数字
 * 如果字符 x 是一个数字或一个字母，则该函数返回非零值，否则返回 0
 */

#include <cctype>
#include <iostream>
using namespace std;

int main() {
    int a = 1;      cout << isalnum(a) << " ";
    float b = 2.0;  cout << isalnum(b) << " ";
    double c = 3.0; cout << isalnum(c) << " ";

    char d = 'd';   cout << isalnum(d) << " ";

    int e = '4';    cout << isalnum(e) << " ";
    int f = 'f';    cout << isalnum(f) << " ";
    int g = '\t';   cout << isalnum(g) << " ";
    int h = ' ';    cout << isalnum(h) << " ";

    return 0;
}
