#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertSort(int *arr, int len)
{
    // 默认数组的第一位是按从小到大的顺序排好序了的，所以从第二个元素开始遍历
    for (int i = 1; i < len; i++)
    {
        int num = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (*(arr + num) < *(arr + j))
            {
                swap(arr + num, arr + j);
                num -= 1;
            }
        }
    }
}

int main()
{
    int arr[] = {3, 1, 4, 0, 3, 6, -1, 10, 7};

    const int len = sizeof(arr) / sizeof(int);

    insertSort(arr, len);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}