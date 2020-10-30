
/**
* 使用二维数组，编写一个 3 × 3 矩阵转置的函数
*/
// 1  2  3
// 5  6  7
// 9  10 11

#include <iostream>
using namespace std;

// 二维数组 --> 每个元素都是个指针的数组
void move(int(*arr)[3]) {
	int temp;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < i; j++) {
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
		cout << endl;
	}
}

int main() {
	int data[3][3], i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cout << "第 " << i + 1 << " 行 " << j + 1 << " 个元素为: ";
			cin >> data[i][j];
		}
	}
	cout << "输入的矩阵为: " << endl;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cout << data[i][j] << " ";
		}
		cout << endl;
	}

	// 矩阵转置
	move(data);

	cout << "转置后的矩阵为: " << endl;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cout << data[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

