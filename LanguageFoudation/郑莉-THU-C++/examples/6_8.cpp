// 利用指针数组输出单位矩阵
// 单位矩阵: 主对角线元素为 1，其余元素为 0 的矩阵，本例是一个 3 × 3 的单位矩阵

#include <iostream>
using namespace std;

int main()
{
    int line1[3] = {1, 0, 0};
    int line2[3] = {0, 1, 0};
    int line3[3] = {0, 0, 1};
    int* arr[3] = {line1, line2, line3};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
