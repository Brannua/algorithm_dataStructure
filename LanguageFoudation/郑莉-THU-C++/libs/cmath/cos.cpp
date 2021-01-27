/**
 * double cos(double x);
 * 求弧度的余弦 < 弧度 = 弧长 / 半径 >
 */

#include <cmath>
#include <iostream>
using namespace std;

#define PI 3.14159

int main() {
    double angle = 30;                  // 角度
    double radian = angle / 180 * PI;   // 弧度
    cout << cos(radian) << endl;        // 余弦
    return 0;
}
