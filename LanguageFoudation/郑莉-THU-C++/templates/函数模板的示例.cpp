#include <iostream>
using namespace std;

template<class T>
// template<typename T>
void outPutArray(const T * array, int count)
{
    for (int i = 0; i < count; i ++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    const int A_COUNT = 8,
        B_COUNT = 8,
        C_COUNT = 20;
    int a[A_COUNT] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    double b[B_COUNT] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8 };
    char c[C_COUNT] = "Welcome to see you!";

    outPutArray(a, A_COUNT);
    outPutArray(b, B_COUNT);
    outPutArray(c, C_COUNT);

    return 0;
}
