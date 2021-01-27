/**
 * unsigned int strlen(const char * str)
 */

#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char str[] = { "hello" };
    cout << strlen(str) << endl;
    cout << sizeof(str) / sizeof(char) << endl;
    return 0;
}
