#include <iostream>
using namespace std;

int main()
{
    int x = 3,
        y = 4,
        z = 5;

    cout << ( !(x + y) + z - 1 ) << endl;

    cout << ( y + z / 2 ) << endl;

    cout << ( ( !(x + y) + z - 1 ) && ( y + z / 2 ) ) << endl;

    return 0;
}
