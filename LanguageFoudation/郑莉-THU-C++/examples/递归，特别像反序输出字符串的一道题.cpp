

#include <iostream>
using namespace std;

void fun(int m) {
    char ch;
    cin >> ch;
    if (m > 1) {
        fun(m - 1);
    }
    cout << ch;
}

int main() {
    fun(10);
    return 0;
}
