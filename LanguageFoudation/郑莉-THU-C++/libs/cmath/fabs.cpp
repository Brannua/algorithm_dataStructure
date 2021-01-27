/**
 * double fabs(double x);
 * 求 x 的绝对值
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double x = 10,
           y = -10;
    cout << fabs(x) << endl;
    cout << fabs(y) << endl;
    return 0;
}
