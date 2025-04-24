#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 500005

int a[MAX_SIZE];
int b[MAX_SIZE];

// 简化的比较函数
int cmp(const void* p1, const void* p2) {
    return (*(int*)p1 - *(int*)p2);
}

// 二分查找函数
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return left;
}

int main() {
    int n;
    scanf("%d", &n);

    // 读取数组 a
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // 读取数组 b
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    // 对数组 a 和 b 进行排序
    qsort(a, n, sizeof(int), cmp);
    qsort(b, n, sizeof(int), cmp);

    int flag = -1;
    for (int i = 0; i < n; i++) {
        // 使用二分查找找到第一个大于等于 a[i] 的元素的索引
        int index = binarySearch(b, n, a[i]);
        if (index == n) {
            flag = i;
            break;
        }
    }

    // 输出结果
    printf("%d\n", flag);

    return 0;
}