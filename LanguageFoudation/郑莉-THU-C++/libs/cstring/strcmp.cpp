/**
 * int strcpm(const char * str1, const char * str2);
 * 比较 str1 和 str2 所指向的字符串
 *      如果返回值小于 0，则表示 str1 小于 str2。
 *      如果返回值大于 0，则表示 str1 大于 str2。
 *      如果返回值等于 0，则表示 str1 等于 str2。
 */

#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char str1[] = { "hello" };
    char str2[] = { "hello" };
    char str3[] = { "world" };
    char str4[] = { "a" };
    cout << "str1 == str2 " << strcmp(str1, str2) << endl;
    cout << "str1 < str3 " << strcmp(str1, str3) << endl;
    cout << "str1 > str4 " << strcmp(str1, str4) << endl;
    return 0;
}
