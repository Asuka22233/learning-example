#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 500005

int a[MAX_SIZE];
int b[MAX_SIZE];

// �򻯵ıȽϺ���
int cmp(const void* p1, const void* p2) {
    return (*(int*)p1 - *(int*)p2);
}

// ���ֲ��Һ���
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

    // ��ȡ���� a
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // ��ȡ���� b
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    // ������ a �� b ��������
    qsort(a, n, sizeof(int), cmp);
    qsort(b, n, sizeof(int), cmp);

    int flag = -1;
    for (int i = 0; i < n; i++) {
        // ʹ�ö��ֲ����ҵ���һ�����ڵ��� a[i] ��Ԫ�ص�����
        int index = binarySearch(b, n, a[i]);
        if (index == n) {
            flag = i;
            break;
        }
    }

    // ������
    printf("%d\n", flag);

    return 0;
}