/**
 * double pow(double x, double y);
 * 求 x 的 y 次幂
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {

    double x = 2,
           y = 1.5,
           z = 2;

    cout << pow(x, y) << " " << pow(x, z) << endl;
    return 0;
}
