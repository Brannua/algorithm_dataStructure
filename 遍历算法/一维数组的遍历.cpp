#include <iostream>
using namespace std;

void print(int * arr, int len) {
    for (int i = 0; i < len; i ++) {
        cout << *(arr + i) << " ";
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    const int len = sizeof(arr) / sizeof(int);
    print(arr, len);
    return 0;
}
