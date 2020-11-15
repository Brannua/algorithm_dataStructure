#include <iostream>
using namespace std;

// 一趟冒泡
// [3, 1], 4, 0, 3, 6, -1, 10, 7
// 1, [3, 4], 0, 3, 6, -1, 10, 7
// 1, 3, [4, 0], 3, 6, -1, 10, 7
// 1, 3, 0, [4, 3], 6, -1, 10, 7
// 1, 3, 0, 3, [4, 6], -1, 10, 7
// 1, 3, 0, 3, 4, [6, -1], 10, 7
// 1, 3, 0, 3, 4, -1, [6, 10], 7
// 1, 3, 0, 3, 4, -1, 6, [10, 7]
// 1, 3, 0, 3, 4, -1, 6, 7, 10

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 一趟排序
void bubble(int *ptr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        if (*(ptr + i) > *(ptr + i + 1))
        {
            swap(ptr + i, ptr + i + 1);
        }
    }
}

void bubbleSort(int *arr, int len)
{
    while (len > 1)
    {
        bubble(arr, len);
        len--;
    }
}

int main()
{
    int arr[] = {3, 1, 4, 0, 3, 6, -1, 10, 7};

    const int len = sizeof(arr) / sizeof(int);

    bubbleSort(arr, len);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}