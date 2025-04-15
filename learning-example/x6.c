//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//
//// 定义一个结构体来存储区间
//typedef struct {
//    int left;
//    int right;
//    int left_inclusive;  // 左端点是否包含，1表示包含，0表示不包含
//    int right_inclusive; // 右端点是否包含，1表示包含，0表示不包含
//} Interval;
//
//// 解析区间字符串，填充Interval结构体
//int parse_interval(const char* str, Interval* interval) {
//    int len = strlen(str);
//    // 检查字符串是否符合格式要求
//    if (len < 5 || str[0] != '(' && str[0] != '[' || str[len - 1] != ')' && str[len - 1] != ']') {
//        return 0;
//    }
//    // 确定左端点是否包含
//    interval->left_inclusive = (str[0] == '[');
//    // 确定右端点是否包含
//    interval->right_inclusive = (str[len - 1] == ']');
//
//    int i = 1;
//    char left_str[10] = { 0 };
//    // 提取左端点字符
//    while (str[i] != ',') {
//        left_str[i - 1] = str[i];
//        i++;
//    }
//    interval->left = atoi(left_str);
//
//    i++;
//    char right_str[10] = { 0 };
//    int j = 0;
//    // 提取右端点字符
//    while (i < len - 1) {
//        right_str[j] = str[i];
//        i++;
//        j++;
//    }
//    interval->right = atoi(right_str);
//
//    return 1;
//}
//
//int main() {
//    char line[100];
//    Interval intervals[100];
//    int count = 0;
//
//    while (1) {
//        // 读取一行输入
//        if (fgets(line, sizeof(line), stdin) == NULL) {
//            break;
//        }
//        // 去除行末的换行符
//        line[strcspn(line, "\n")] = '\0';
//
//        if (strlen(line) == 0) {
//            break;
//        }
//
//        Interval interval;
//        if (parse_interval(line, &interval)) {
//            intervals[count] = interval;
//            count++;
//        }
//        else {
//            printf("输入格式错误，请重新输入。\n");
//        }
//    }
//
//    // 输出读取到的区间
//    printf("读取到的区间为:\n");
//    for (int i = 0; i < count; i++) {
//        printf("[%s%d, %d%s]\n",
//            intervals[i].left_inclusive ? "[" : "(",
//            intervals[i].left,
//            intervals[i].right,
//            intervals[i].right_inclusive ? "]" : ")");
//    }
//
//    return 0;
//}