#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 贪心的思想
void selectSort(int *ptr, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (*(ptr + j) < *(ptr + i))
            {
                swap(ptr + i, ptr + j);
            }
        }
    }
}

int main()
{
    int arr[] = {3, 1, 4, 0, 3, 6, -1, 10, 7};

    const int len = sizeof(arr) / sizeof(int);

    selectSort(arr, len);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
