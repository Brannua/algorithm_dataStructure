#include <iostream>
using namespace std;

int main() {
    char * p;
    char s[] = { "string" };
    // p = &s; // error
    p = s;
    cout << (void *)s; // 输出字符串的地址
    //cout << s;
    return 0;
}
