//#include <stdio.h>
//#include <stdlib.h>
//#include <limits.h>
//
//// 计算最大价值的函数
//int cutRod(int price[], int n) {
//    int* r = (int*)malloc((n + 1) * sizeof(int));
//    if (r == NULL) {
//        fprintf(stderr, "内存分配失败\n");
//        return -1;
//    }
//    r[0] = 0;
//
//    // 计算每个长度的最大价值
//    for (int i = 1; i <= n; i++) {
//        int max_val = INT_MIN;
//        for (int j = 1; j <= i; j++) {
//            int current_val = price[j - 1] + r[i - j];
//            if (current_val > max_val) {
//                max_val = current_val;
//            }
//        }
//        r[i] = max_val;
//    }
//
//    int result = r[n];
//    free(r);
//    return result;
//}
//
//int main() {
//    int price[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
//    int n = sizeof(price) / sizeof(price[0]);
//    int max_value = cutRod(price, n);
//    printf("长度为 %d 的钢管切割后的最大价值为: %d\n", n, max_value);
//    return 0;
//}