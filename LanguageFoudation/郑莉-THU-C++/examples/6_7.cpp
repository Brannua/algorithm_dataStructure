// 设有一个 int 型数组 a，有 10 个元素，用多种方法输出各元素

#include <iostream>
using namespace std;

void foo(int p[]) {
    for (int i = 0; i < 10; i ++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

void foo_1(int* p) {
    for (int i = 0; i < 10; i ++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

void foo_2(int* p) {
    for (int i = 0; i < 10; i ++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
}

void foo_3(int* p) {
    for (int* a = p; a < p + 10; a ++) {
        cout << *a << " ";
    }
    cout << endl;
}

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    foo(a);
    foo_1(a);
    foo_2(a);
    foo_3(a);
    return 0;
}
