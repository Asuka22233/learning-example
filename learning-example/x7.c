#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100
#define INITIAL_CAPACITY 10

// ����һ���ṹ�����洢������
typedef struct {
    int first;
    int second;
} Pair;

int main() {
    char line[MAX_LINE_LENGTH];
    Pair* pairs = (Pair*)malloc(INITIAL_CAPACITY * sizeof(Pair));
    if (pairs == NULL) {
        fprintf(stderr, "�ڴ����ʧ��\n");
        return 1;
    }
    int capacity = INITIAL_CAPACITY;
    int count = 0;

    while (fgets(line, sizeof(line), stdin) != NULL) {
        // ȥ�����з�
        line[strcspn(line, "\n")] = 0;
        // ����ǿ������������
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

        // �������Ƿ��ж��������
        token = strtok(NULL, " ");
        if (token != NULL) {
            fprintf(stderr, "�����ʽ������������Ч�������ԡ�\n");
            continue;
        }

        // ���������������������
        if (count >= capacity) {
            capacity *= 2;
            pairs = (Pair*)realloc(pairs, capacity * sizeof(Pair));
            if (pairs == NULL) {
                fprintf(stderr, "�ڴ����ʧ��\n");
                return 1;
            }
        }

        // �洢������
        pairs[count].first = (int)num1;
        pairs[count].second = (int)num2;
        count++;
    }

    // �����ӡ��ȡ����������
    printf("��ȡ�������������£�\n");
    for (int i = 0; i < count; i++) {
        printf("%d %d\n", pairs[i].first, pairs[i].second);
    }

    // �ͷŶ�̬������ڴ�
    free(pairs);

    return 0;
}
