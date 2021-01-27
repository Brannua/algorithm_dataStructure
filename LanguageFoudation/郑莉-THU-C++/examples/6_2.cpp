/**
 * @desc 使用数组名作为函数参数
 */

#include <iostream>
using namespace std;

// Tips: 把数组作为参数时，一般不指定数组第一维的大小，即使指定，也会被忽略
void rowSum(int table[][4])
{
    for (int i = 0; i < 3; i ++) {
        for (int j = 1; j < 4; j ++) {
            table[i][0] += table[i][j];
        }
    }
}

int main()
{
    int table[3][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6}};
    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 4; j ++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    rowSum(table);
    for (int i = 0; i < 3; i ++) {
        cout << "Sum of row " << i << " is " << table[i][0] << endl;
    }
    return 0;
}
