// 例 6_9 尽管指针数组与二维数组存在本质的差异，但二者具有相同的访问形式
// 可以把二维数组当作指针数组来访问

#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{11, 12, 13}, {21, 22, 23}, {31, 32, 33}};
    for (int i = 0; i < 3; i ++) {
        // cout << (arr + i) << " : " << *(arr + i) << " " << ((arr + i) == *(arr + i)) << endl;
        for (int j = 0; j < 3; j ++) {
            cout << *(*(arr + i) + j) << " "; // 等价于 arr[i][j]
        }
        cout << endl;
    }
    return 0;
}
