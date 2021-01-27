// 结构体内存布局：https://blog.csdn.net/chenhaitao123/article/details/6222596
#include <iostream>
using namespace std;

int main() {
    struct foo {
        char x;
        int z;
        char y;
    };
    struct foo2 {
        char x;
        char y;
        int z;
    };
    cout << sizeof(foo) << " " << sizeof(foo2) << endl;
    return 0;
}
