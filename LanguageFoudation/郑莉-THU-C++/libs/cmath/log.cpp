/**
 * double log(double x);
 * 求 x 的自然对数( 底数为 e 的对数 )
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double x = 0,
           y = 1,
           z = 2,
           o = 2.71828;
    cout << log(x) << endl;
    cout << log(y) << endl;
    cout << log(z) << endl;
    cout << log(o) << endl;
    return 0;
}
