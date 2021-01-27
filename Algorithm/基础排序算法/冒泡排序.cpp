/*
    冒泡排序又称（交换排序）
      如何优化该算法的时间复杂度
        1. 一趟冒泡可以将最大的数冒泡到最顶端，所以下一趟冒泡就不需要遍历这个已经排好序的数
        2. 如果一趟冒泡下来，发生位置交换的次数为 0，说明给定的序列本身就是有序的，就不需要继续进行冒泡排序了，直接返回即可
*/
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

// 用来判断给定的序列是否是从小到大排好顺序的
bool isOrderly(int * arr, int len)
{
    bool res = true;
    for (int i = 0; i < len - 1; i ++)
    {
        if (arr[i] > arr[i + 1])
        {
            res = false;
            break;
        }
    }
    return res;
}

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
    while (len > 1 && !isOrderly(arr, len))
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
