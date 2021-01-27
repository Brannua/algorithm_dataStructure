#include <iostream>
using namespace std;

int main() {
    char s[10] = "string";
    cout << *s << endl;

    cout << s << endl;
    cout << &s << endl;
    cout << (void *)s << endl;

    int arr[3] = {1, 2, 3};
    int (* ptr)[3] = &arr;
    cout << *ptr << endl;
    cout << **ptr << endl;

    int a = 4, b = 5, c = 6;
    int * ptr2[3] = { &a, &b, &c };
    cout << **ptr2 << endl;
    return 0;
}
