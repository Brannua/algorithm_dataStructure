// 例 6_10 读入三个浮点数，将整数部分和小数部分分别输出

#include <iostream>
using namespace std;

// 方法一: 利用指针
void splitFloat_1(float* num, int* inte, float* frac) {
    *inte = (int)(*num);
    *frac = *num - *inte;
}

// 方法二: 利用引用
void splitFloat_2(float &num, int &inte, float &frac) {
    inte = (int)(num);
    frac = num - inte;
}

int main() {
    float number, fracPart;
    int intPart;

    cout << "Enter 3 float point numbers: " << endl;

    for (int i = 0; i < 3; i ++) {
        cin >> number;
        splitFloat_1(&number, &intPart, &fracPart);
        // splitFloat_2(number, intPart, fracPart);
        cout << "Integer Part=" << intPart << " Fraction Part=" << fracPart << endl;
    }
}
