/**
 * 中文描述算法 && C语言实现算法
 */

#include <stdio.h>
#include <math.h>

int main() {
    // 1. 输入方程的系数 a, b, c
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    // 2. 判断 a 是否为 0, 如果为 0, 则输出不是一元二次方程并终止程序, 否则继续执行
    if (a == 0) {
        printf("不是一元二次方程");
        return -1;
    }
    // 3. 计算 d = b * b - 4 * a * c;
    int d = b * b - 4 * a * c;
    // 4. 如果 d < 0, 则输出没有实数根并终止程序；否则输出实根
    if (d < 0) {
        printf("没有实数根");
        return -1;
    }
    double sub_d = sqrt(d),
           res1 = (-1 * b + sub_d) / 2 * a,
           res2 = (-1 * b - sub_d) / 2 * a;
    printf("x1: %f, x2: %f", res1, res2);
    // 5. 结束
    return 0;
}
