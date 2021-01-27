#include <iostream>
using namespace std;

void fun () {
    cout << "fun" << endl;
}

int main() {
    void (*ptr)() = fun;
    ptr();
    return 0;
}
