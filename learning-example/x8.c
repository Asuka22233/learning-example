/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100
#define INITIAL_CAPACITY 10

// ����洢 int ���������ԵĽṹ��
typedef struct {
    int first;
    int second;
} IntPair;

// ����洢 long ���������ԵĽṹ��
typedef struct {
    long first;
    long second;
} LongPair;

// ��ȡ int ���������Եĺ���
IntPair* read_int_pairs(int* count) {
    char line[MAX_LINE_LENGTH];
    IntPair* pairs = (IntPair*)malloc(INITIAL_CAPACITY * sizeof(IntPair));
    if (pairs == NULL) {
        fprintf(stderr, "�ڴ����ʧ��\n");
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
            fprintf(stderr, "�����ʽ������������Ч�������ԡ�\n");
            continue;
        }
        long num1 = strtol(token, NULL, 10);

        token = strtok(NULL, " ");
        if (token == NULL) {
            fprintf(stderr, "�����ʽ������������Ч�������ԡ�\n");
            continue;
        }
        long num2 = strtol(token, NULL, 10);

        token = strtok(NULL, " ");
        if (token != NULL) {
            fprintf(stderr, "�����ʽ������������Ч�������ԡ�\n");
            continue;
        }

        if (*count >= capacity) {
            capacity *= 2;
            pairs = (IntPair*)realloc(pairs, capacity * sizeof(IntPair));
            if (pairs == NULL) {
                fprintf(stderr, "�ڴ����ʧ��\n");
                return NULL;
            }
        }

        pairs[*count].first = (int)num1;
        pairs[*count].second = (int)num2;
        (*count)++;
    }

    return pairs;
}

// ��ȡ long ���������Եĺ���
LongPair* read_long_pairs(int* count) {
    char line[MAX_LINE_LENGTH];
    LongPair* pairs = (LongPair*)malloc(INITIAL_CAPACITY * sizeof(LongPair));
    if (pairs == NULL) {
        fprintf(stderr, "�ڴ����ʧ��\n");
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
            fprintf(stderr, "�����ʽ������������Ч�������ԡ�\n");
            continue;
        }
        long num1 = strtol(token, NULL, 10);

        token = strtok(NULL, " ");
        if (token == NULL) {
            fprintf(stderr, "�����ʽ������������Ч�������ԡ�\n");
            continue;
        }
        long num2 = strtol(token, NULL, 10);

        token = strtok(NULL, " ");
        if (token != NULL) {
            fprintf(stderr, "�����ʽ������������Ч�������ԡ�\n");
            continue;
        }

        if (*count >= capacity) {
            capacity *= 2;
            pairs = (LongPair*)realloc(pairs, capacity * sizeof(LongPair));
            if (pairs == NULL) {
                fprintf(stderr, "�ڴ����ʧ��\n");
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
        printf("��ȡ���� int �������������£�\n");
        for (int i = 0; i < int_count; i++) {
            printf("%d %d\n", int_pairs[i].first, int_pairs[i].second);
        }
        free(int_pairs);
    }

    int long_count;
    LongPair* long_pairs = read_long_pairs(&long_count);
    if (long_pairs != NULL) {
        printf("��ȡ���� long �������������£�\n");
        for (int i = 0; i < long_count; i++) {
            printf("%ld %ld\n", long_pairs[i].first, long_pairs[i].second);
        }
        free(long_pairs);
    }

    return 0;
}

*/

