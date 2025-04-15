#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100
#define INITIAL_CAPACITY 10

// 定义一个结构体来存储整数对
typedef struct {
    int first;
    int second;
} Pair;

int main() {
    char line[MAX_LINE_LENGTH];
    Pair* pairs = (Pair*)malloc(INITIAL_CAPACITY * sizeof(Pair));
    if (pairs == NULL) {
        fprintf(stderr, "内存分配失败\n");
        return 1;
    }
    int capacity = INITIAL_CAPACITY;
    int count = 0;

    while (fgets(line, sizeof(line), stdin) != NULL) {
        // 去除换行符
        line[strcspn(line, "\n")] = 0;
        // 如果是空行则结束输入
        if (line[0] == '\0') {
            break;
        }

        char* token = strtok(line, " ");
        if (token == NULL) {
            fprintf(stderr, "输入格式有误，请输入有效的整数对。\n");
            continue;
        }
        long num1 = strtol(token, NULL, 10);

        token = strtok(NULL, " ");
        if (token == NULL) {
            fprintf(stderr, "输入格式有误，请输入有效的整数对。\n");
            continue;
        }
        long num2 = strtol(token, NULL, 10);

        // 检查后续是否还有多余的输入
        token = strtok(NULL, " ");
        if (token != NULL) {
            fprintf(stderr, "输入格式有误，请输入有效的整数对。\n");
            continue;
        }

        // 如果数组已满，进行扩容
        if (count >= capacity) {
            capacity *= 2;
            pairs = (Pair*)realloc(pairs, capacity * sizeof(Pair));
            if (pairs == NULL) {
                fprintf(stderr, "内存分配失败\n");
                return 1;
            }
        }

        // 存储整数对
        pairs[count].first = (int)num1;
        pairs[count].second = (int)num2;
        count++;
    }

    // 整体打印读取到的整数对
    printf("读取到的整数对如下：\n");
    for (int i = 0; i < count; i++) {
        printf("%d %d\n", pairs[i].first, pairs[i].second);
    }

    // 释放动态分配的内存
    free(pairs);

    return 0;
}
