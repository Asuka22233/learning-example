/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100
#define INITIAL_CAPACITY 10

// 定义存储 int 类型整数对的结构体
typedef struct {
    int first;
    int second;
} IntPair;

// 定义存储 long 类型整数对的结构体
typedef struct {
    long first;
    long second;
} LongPair;

// 读取 int 类型整数对的函数
IntPair* read_int_pairs(int* count) {
    char line[MAX_LINE_LENGTH];
    IntPair* pairs = (IntPair*)malloc(INITIAL_CAPACITY * sizeof(IntPair));
    if (pairs == NULL) {
        fprintf(stderr, "内存分配失败\n");
        return NULL;
    }
    int capacity = INITIAL_CAPACITY;
    *count = 0;

    while (fgets(line, sizeof(line), stdin) != NULL) {
        line[strcspn(line, "\n")] = 0;
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

        token = strtok(NULL, " ");
        if (token != NULL) {
            fprintf(stderr, "输入格式有误，请输入有效的整数对。\n");
            continue;
        }

        if (*count >= capacity) {
            capacity *= 2;
            pairs = (IntPair*)realloc(pairs, capacity * sizeof(IntPair));
            if (pairs == NULL) {
                fprintf(stderr, "内存分配失败\n");
                return NULL;
            }
        }

        pairs[*count].first = (int)num1;
        pairs[*count].second = (int)num2;
        (*count)++;
    }

    return pairs;
}

// 读取 long 类型整数对的函数
LongPair* read_long_pairs(int* count) {
    char line[MAX_LINE_LENGTH];
    LongPair* pairs = (LongPair*)malloc(INITIAL_CAPACITY * sizeof(LongPair));
    if (pairs == NULL) {
        fprintf(stderr, "内存分配失败\n");
        return NULL;
    }
    int capacity = INITIAL_CAPACITY;
    *count = 0;

    while (fgets(line, sizeof(line), stdin) != NULL) {
        line[strcspn(line, "\n")] = 0;
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

        token = strtok(NULL, " ");
        if (token != NULL) {
            fprintf(stderr, "输入格式有误，请输入有效的整数对。\n");
            continue;
        }

        if (*count >= capacity) {
            capacity *= 2;
            pairs = (LongPair*)realloc(pairs, capacity * sizeof(LongPair));
            if (pairs == NULL) {
                fprintf(stderr, "内存分配失败\n");
                return NULL;
            }
        }

        pairs[*count].first = num1;
        pairs[*count].second = num2;
        (*count)++;
    }

    return pairs;
}

int main() {
    int int_count;
    IntPair* int_pairs = read_int_pairs(&int_count);
    if (int_pairs != NULL) {
        printf("读取到的 int 类型整数对如下：\n");
        for (int i = 0; i < int_count; i++) {
            printf("%d %d\n", int_pairs[i].first, int_pairs[i].second);
        }
        free(int_pairs);
    }

    int long_count;
    LongPair* long_pairs = read_long_pairs(&long_count);
    if (long_pairs != NULL) {
        printf("读取到的 long 类型整数对如下：\n");
        for (int i = 0; i < long_count; i++) {
            printf("%ld %ld\n", long_pairs[i].first, long_pairs[i].second);
        }
        free(long_pairs);
    }

    return 0;
}

*/

