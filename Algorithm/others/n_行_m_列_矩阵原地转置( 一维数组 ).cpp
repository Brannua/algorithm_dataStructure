
/**
 * 使用一维数组实现的矩阵原地转置，矩阵行列数目可不相同
 */
// 1  2  3  4     (0, 0) (0, 1) (0, 2)   (0, 3)
// 5  6  7  8     (1, 0) (1, 1) (1, 2)   (1, 3)
// 9  10 11 12    (2, 0) (2, 1) (2, 2)   (2, 3)

//                (3, 0) (3, 1) (3, 2)

// 1  5  9
// 2  6  10
// 3  7  11
// 4  8  12

#include <iostream>
using namespace std;

void move(int * arr, int n, int m) { // 对于一个 n × m 的矩阵
    int temp;
    for (int i = 0; i < n; i ++) { // arr[i][j] <--> arr[j][i]
        for (int j = 0; j < m; j ++) {
            if ((n <= m && i < j) || (n > m && i > j)) {
                temp = *(arr + i * m + j);
                *(arr + i * m + j) = *(arr + j * m + i);
                *(arr + j * m + i) = temp;
            }
        }
    }    
}

int main() {
    int n, m, i, j;
    cout << "请输入矩阵有几行: ";
    cin >> n;
    cout << "请输入矩阵有几列: ";
    cin >> m;

    int t = n > m ? n : m;
    int * arr = new int(t * t);

    for (i = 0; i < n; i ++) {
        for (j = 0; j < m; j ++) {
            cout << "输入第 " << (i + 1) << " 行，第 " << (j + 1) << " 列的数: ";
            cin >> *(arr + i * m + j);
        }
    }

    cout << "输入的矩阵为: " << endl;
    for (i = 0; i < n; i ++) {
        for (j = 0; j < m; j ++) {
            cout << *(arr + i * m + j) << " ";
        }
        cout << endl;
    }

    move(arr, n, m);

    cout << "矩阵转置后输出: " << endl;
    for (int i = 0; i < m; i ++) {
        for (int j = 0; j < n; j ++) {
            cout << *(arr + i * t + j) << " ";
        }
        cout << endl;
    }
    return 0;
}

// ------------------------------------------------------------------
// // 一行 JavaScript 代码生成转置矩阵（开辟了新的内存空间，并非原地转置）
// var arr = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]];
// console.log( Array.from( { length: arr[0].length }, (_, i) => arr.map(item => item[i]) ) );
