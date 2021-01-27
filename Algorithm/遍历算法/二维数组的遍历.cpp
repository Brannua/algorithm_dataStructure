#include <iostream>
using namespace std;

void print(int (*arr)[4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void print_2()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 4; j ++) {
            cout << *(arr + i * 4 + j) << " ";
        }
        cout << endl;
    }

}

int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    const int total = sizeof(arr) / sizeof(int);
    const int col = sizeof(arr[0]) / sizeof(int);
    const int row = total / col;

    print(arr, row, col);
    cout << endl;
    print_2();

    return 0;
}