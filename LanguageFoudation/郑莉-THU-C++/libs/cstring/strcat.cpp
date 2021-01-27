/**
 * char * strcat(char * dest, const char * src);
 * 把 src 所指向的字符串追加到 dest 所指向的字符串的结尾
 */

#include <cstring>
#include <iostream>
using namespace std;

int main() {
    // 注意数组的内存空间大小是固定的，无法动态扩容
    char str[10] = { "hello" };
    char str2[] = { "world" };

    // strcat 非纯函数
    strcat(str, str2);

    for (int i = 0, len = sizeof(str) / sizeof(char); i < len; i ++) {
        cout << str[i];
    }
    return 0;
}
