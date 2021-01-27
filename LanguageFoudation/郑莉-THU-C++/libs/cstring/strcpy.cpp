/**
 * char * strcpy(char * dest, const char * src);
 * 把 src 所指向的字符串复制到 dest
 */

#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char str[] = { "hello" }; int len = sizeof(str) / sizeof(char);
    char str2[len];

    strcpy(str2, str);

    for (int i = 0; i < len; i ++) {
        cout << str2[i];
    }
    return 0;
}
