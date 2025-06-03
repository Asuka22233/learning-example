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
//    // ��ȡ��һ������
//    printf("�������һ�����飨�Է����ֽ�������\n");
//    while (size1 < MAX_SIZE && scanf("%lld", &arr1[size1]) == 1) {
//        size1++;
//    }
//    // ������뻺����
//    while (getchar() != '\n');
//
//    // ��ȡ�ڶ�������
//    printf("������ڶ������飨�Է����ֽ�������\n");
//    while (size2 < MAX_SIZE && scanf("%lld", &arr2[size2]) == 1) {
//        size2++;
//    }
//
//    // ������������
//    qsort(arr1, size1, sizeof(long long), compare);
//    qsort(arr2, size2, sizeof(long long), compare);
//
//    // ���ҹ���Ԫ�ز�����ȥ�غ��ΨһԪ������
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
//            j++; // �����ظ��Ƚ�
//        }
//    }
//    // ���ʣ��Ԫ��
//    while (i < size1) unique1[unique1_size++] = arr1[i++];
//    while (j < size2) unique2[unique2_size++] = arr2[j++];
//
//    // ������
//    printf("��ͬ��Ԫ�أ�");
//    for (i = 0; i < common_size; i++) {
//        printf("%lld ", common[i]);
//    }
//    printf("\n");
//
//    printf("��һ������ȥ����ͬԪ�غ�");
//    for (i = 0; i < unique1_size; i++) {
//        printf("%lld ", unique1[i]);
//    }
//    printf("\n");
//
//    printf("�ڶ�������ȥ����ͬԪ�غ�");
//    for (i = 0; i < unique2_size; i++) {
//        printf("%lld ", unique2[i]);
//    }
//    printf("\n");
//
//    return 0;
//}