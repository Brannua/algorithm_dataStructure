/**
 * int isalpha(int x)
 * 检查传入的字符是否是字母
 * 如果字符 x 是一个字母，则该函数返回非零值，否则返回 0
 */

#include <cctype>
#include <iostream>
using namespace std;

int main() {
    int a = 1;      cout << isalpha(a) << " ";
    float b = 2.0;  cout << isalpha(b) << " ";
    double c = 3.0; cout << isalpha(c) << " ";

    char d = 'd';   cout << isalpha(d) << " ";

    int e = '4';    cout << isalpha(e) << " ";
    int f = 'f';    cout << isalpha(f) << " ";
    int g = '\t';   cout << isalpha(g) << " ";
    int h = ' ';    cout << isalpha(h) << " ";

    return 0;
}
