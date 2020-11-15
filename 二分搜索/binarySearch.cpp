#include <iostream>
using namespace std;

int binarySearch(int *arr, int len, int target)
{
    // 散列一下 ( 为了给数组加下标 )
    int Indexes[len];
    for (int i = 0; i < len; i++)
    {
        Indexes[arr[i]] = i;
    }

    int *left = arr;
    int *right = arr + len - 1;
    while (left <= right)
    {
        int *mid = left + (right - left) / 2;
        if (*mid == target)
        {
            return Indexes[*mid];  // 返回的是下标
        }
        else if (*mid > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    const int len = sizeof(arr) / sizeof(int);
    const int res = binarySearch(arr, len, 2);
    cout << res;
    return 0;
}
