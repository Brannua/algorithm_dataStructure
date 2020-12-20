/**
 * 以整数数组去重学习散列算法的思想
 */

#include <stdio.h>

void sanLieQuChong(int * arr, int arrLen) { 
    int temp[arrLen]; 
    for (int i = 0; i < arrLen; i ++) { temp[i] = -1; } // 初始化散列表
    for (int i = 0; i < arrLen; i ++) {                 // 将 arr 根据某种规则散列到 temp 上
        if (temp[arr[i]] == -1) {
            temp[arr[i]] = arr[i];                      // 这种散列映射方法无法处理数组元素为负数的情况
        } 
    }
    for (int i = 0; i < arrLen; i ++) {
        if (temp[i] != -1) {
            printf("%d ", temp[i]);                     // 输出
        } 
    } 
}

int main() {
    int arr[] = { 1, 2, 2, 3, 1, 4, 6, 1, 0 };
    sanLieQuChong(arr, sizeof(arr) / sizeof(int));
    return 0;
}
