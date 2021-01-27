# 二分搜索的一般思路

1. left = 0, right = length - 1

2. while left <= right

    mid = left + (right - left) / 2; // 这样写可以防止超出整型的最大范围

    如果 target == mid, return

    如果 target < mid, right = mid - 1

    如果 target > mid, left = mid + 1

3. while循环结束后依然未返回，说明没找到，返回 -1
