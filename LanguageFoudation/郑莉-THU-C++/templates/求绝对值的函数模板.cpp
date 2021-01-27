#include <iostream>
using namespace std;

template <typename T>
T abs(T abs)
{
    return abs > 0 ? abs : -abs;
}

int main()
{
    cout << abs(-1) << endl;
    cout << abs(-1.1) << endl;
    return 0;
}
