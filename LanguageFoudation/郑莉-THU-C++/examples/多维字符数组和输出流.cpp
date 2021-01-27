#include <iostream>
using namespace std;

int main() {
    // int a = 123;
    // int * ptr = &a;
    // cout << &a << endl;
    // cout << ptr << endl;
    // cout << *ptr << endl;


    // char a[3] = {"ab"};
    // char * p = &a[1];
    // cout << a[1] << endl;
    // cout << p << endl;


    // // 单个字符无结束符，输出乱码
    // char c = 'c';
    // char * foo = &c;
    // cout << (&c) << endl;
    // cout << foo << endl;
    // cout << (*foo) << endl;


    // char c[3] = {"cd"};
    // char * foo = c;
    // cout << c << endl;
    // cout << foo << endl;
    // cout << (*foo) << endl;


    char t[][3][5] = { "abcd", "efgh", "ijkl", "mnop", "qrst", "uvwx" };
    for (int i = 0; i < 2; i ++) {
        for (int j = 0; j < 3; j ++) {
            int count = 0;
            for (int k = 0; k < 5; k ++) {
                count++;
                cout << t[i][j][k] << " ";
            }
            cout << "(" << count << ")" << endl;
        }
        cout << endl;
    }

    // cout << t[1][2][3] << endl;
    // cout << &(t[1][2][2]) << endl;
    // cout << &(t[1][2][3]) << endl;

    // char * p = &(t[1][2][1]);
    // cout << p << endl;
    // cout << *p << endl;

    // cout << t[1][2] << endl;
    // cout << *(t[1][2] + 3) << endl;
    // cout << *(*(*(t + 1) + 2) + 3) << endl;
    // cout << *(*(t[1] + 2) + 3) << endl;

    return 0;
}