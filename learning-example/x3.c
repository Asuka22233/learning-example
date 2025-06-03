//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_SIZE 1000
//
//int compare(const void* a, const void* b) {
//    long long x = *(const long long*)a;
//    long long y = *(const long long*)b;
//    return (x < y) ? -1 : (x > y) ? 1 : 0;
//}
//
//int main() {
//    long long arr1[MAX_SIZE], arr2[MAX_SIZE];
//    long long common[MAX_SIZE], unique1[MAX_SIZE], unique2[MAX_SIZE];
//    int size1 = 0, size2 = 0, common_size = 0, unique1_size = 0, unique2_size = 0;
//
//    // 读取第一个数组
//    printf("请输入第一个数组（以非数字结束）：\n");
//    while (size1 < MAX_SIZE && scanf("%lld", &arr1[size1]) == 1) {
//        size1++;
//    }
//    // 清除输入缓冲区
//    while (getchar() != '\n');
//
//    // 读取第二个数组
//    printf("请输入第二个数组（以非数字结束）：\n");
//    while (size2 < MAX_SIZE && scanf("%lld", &arr2[size2]) == 1) {
//        size2++;
//    }
//
//    // 排序两个数组
//    qsort(arr1, size1, sizeof(long long), compare);
//    qsort(arr2, size2, sizeof(long long), compare);
//
//    // 查找公共元素并生成去重后的唯一元素数组
//    int i = 0, j = 0;
//    while (i < size1 && j < size2) {
//        if (arr1[i] < arr2[j]) {
//            unique1[unique1_size++] = arr1[i++];
//        }
//        else if (arr1[i] > arr2[j]) {
//            unique2[unique2_size++] = arr2[j++];
//        }
//        else {
//            common[common_size++] = arr1[i++];
//            j++; // 跳过重复比较
//        }
//    }
//    // 添加剩余元素
//    while (i < size1) unique1[unique1_size++] = arr1[i++];
//    while (j < size2) unique2[unique2_size++] = arr2[j++];
//
//    // 输出结果
//    printf("相同的元素：");
//    for (i = 0; i < common_size; i++) {
//        printf("%lld ", common[i]);
//    }
//    printf("\n");
//
//    printf("第一个数组去掉相同元素后：");
//    for (i = 0; i < unique1_size; i++) {
//        printf("%lld ", unique1[i]);
//    }
//    printf("\n");
//
//    printf("第二个数组去掉相同元素后：");
//    for (i = 0; i < unique2_size; i++) {
//        printf("%lld ", unique2[i]);
//    }
//    printf("\n");
//
//    return 0;
//}