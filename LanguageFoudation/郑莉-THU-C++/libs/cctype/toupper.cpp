/**
 * int toupper(int x)
 * 小写字母转换为大写字母
 * 97 --> a , 65 --> A, 26个英文字母
 */

#include <cctype>
#include <iostream>
using namespace std;

int main() {
    char a = 'a';
    cout << a << " " << toupper(a) << endl;

    char foo = toupper(a);
    cout << foo << endl;

    int b = 'b';    cout << toupper(b) << " ";
    int c = '\t';   cout << toupper(c) << " ";
    int d = ' ';    cout << toupper(d) << " ";
    return 0;
}
