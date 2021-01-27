/**
 * int islower(int x)
 * 检查传入的字符是否是小写字母
 * 如果字符 x 是一个小写字母，则该函数返回非零值，否则返回 0
 */

#include <cctype>
#include <iostream>
using namespace std;

int main() {
    int a = 1;      cout << islower(a) << " ";
    float b = 2.0;  cout << islower(b) << " ";
    double c = 3.0; cout << islower(c) << " ";

    char d = 'd';   cout << islower(d) << " ";

    int e = '4';    cout << islower(e) << " ";
    int f = 'f';    cout << islower(f) << " ";
    int g = '\t';   cout << islower(g) << " ";
    int h = ' ';    cout << islower(h) << " ";

    return 0;
}
