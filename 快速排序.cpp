/**
   快速排序
        分析:
            0. 只有再无序数列中元素个数大于 1 时，才需要进行排序
            1. 我们要对一个无序数列进行排序，可以先将该无序数列分为三份
                1-1. 任选一个元素作为第一份
                1-2. 剩余元素中比第一份小的元素放在第二份中
                1-3. 再剩余的元素作为第三份
            2. 将这三份排序成: 第二份 第一份 第三份
            3. 分别对第二份和第三份无序数列递归执行步骤 0~3
 */

#include <iostream>
using namespace std;

void swap(int * a, int * b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int * left, int * right) {
    if (right > left) {
        int * target = left + 1; // 扫描到的比第一份小的要换到这里
        for (int * leftPtr = left + 1; leftPtr <= right; leftPtr++) {
            if (*leftPtr < *left) {
                swap(target, leftPtr);
                target++;
            }
        }
        swap(left, target - 1);
        sort(left, target - 2);
        sort(target, right);
    }
}

int main() {
    int arr[] = {2, 8, 4, 3, 7, 6, 0, 5, 1}, len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + len - 1);
    for (int i = 0; i < len; i ++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    return 0;
}
