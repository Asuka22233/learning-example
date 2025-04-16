//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_LINE_LENGTH 100
//#define INITIAL_CAPACITY 10
//
//// 定义一个结构体来存储整数对
//typedef struct {
//    int first;
//    int second;
//} Pair;
//
//
//
//int range[1000005]; //全局数组初始化均为0
//int main() {
//    int l, r; //分别表示区间左、右端点
//    int capacity = INITIAL_CAPACITY;
//    int count = 0;
//    char line[MAX_LINE_LENGTH];
//
//    while (fgets(line, sizeof(line), stdin) != NULL) {
//        // 去除换行符
//        line[strcspn(line, "\n")] = 0;
//        // 如果是空行则结束输入
//        if (line[0] == '\0') {
//            break;
//        }
//
//        char* token = strtok(line, " ");
//        if (token == NULL) {
//            fprintf(stderr, "输入格式有误，请输入有效的整数对。\n");
//            continue;
//        }
//        long num1 = strtol(token, NULL, 10);
//
//        token = strtok(NULL, " ");
//        if (token == NULL) {
//            fprintf(stderr, "输入格式有误，请输入有效的整数对。\n");
//            continue;
//        }
//        long num2 = strtol(token, NULL, 10);
//        // 存储整数对
//        l= (int)num1;
//        r = (int)num2;
//        count++;
//        if (r > range[l]) range[l] = r;
//    }
//    
//        
//    for (l = 0; l <= 1000000; ++l) {
//        if (!range[l]) continue; //数组该位置元素值为0，说明没有以该位置为左端点的区间，跳过
//        printf("%d ", l); //输出区间左端点
//        for (r = range[l]; l <= r; ++l) //继续遍历数组，合并区间，注意用相同的计数变量，注意循环条件
//            
//            if (range[l] > r) r = range[l]; //更新正在合并的区间右端点
//        printf("%d\n", --l); //最后依次++l后不满足l<=r，此时l=r+1, 因此应--l，再输出右端点
//    }
//    return 0;
//}