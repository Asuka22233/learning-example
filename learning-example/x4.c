//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_LINE_LENGTH 100
//#define INITIAL_CAPACITY 10
//
//// ����һ���ṹ�����洢������
//typedef struct {
//    int first;
//    int second;
//} Pair;
//
//
//
//int range[1000005]; //ȫ�������ʼ����Ϊ0
//int main() {
//    int l, r; //�ֱ��ʾ�������Ҷ˵�
//    int capacity = INITIAL_CAPACITY;
//    int count = 0;
//    char line[MAX_LINE_LENGTH];
//
//    while (fgets(line, sizeof(line), stdin) != NULL) {
//        // ȥ�����з�
//        line[strcspn(line, "\n")] = 0;
//        // ����ǿ������������
//        if (line[0] == '\0') {
//            break;
//        }
//
//        char* token = strtok(line, " ");
//        if (token == NULL) {
//            fprintf(stderr, "�����ʽ������������Ч�������ԡ�\n");
//            continue;
//        }
//        long num1 = strtol(token, NULL, 10);
//
//        token = strtok(NULL, " ");
//        if (token == NULL) {
//            fprintf(stderr, "�����ʽ������������Ч�������ԡ�\n");
//            continue;
//        }
//        long num2 = strtol(token, NULL, 10);
//        // �洢������
//        l= (int)num1;
//        r = (int)num2;
//        count++;
//        if (r > range[l]) range[l] = r;
//    }
//    
//        
//    for (l = 0; l <= 1000000; ++l) {
//        if (!range[l]) continue; //�����λ��Ԫ��ֵΪ0��˵��û���Ը�λ��Ϊ��˵�����䣬����
//        printf("%d ", l); //���������˵�
//        for (r = range[l]; l <= r; ++l) //�����������飬�ϲ����䣬ע������ͬ�ļ���������ע��ѭ������
//            
//            if (range[l] > r) r = range[l]; //�������ںϲ��������Ҷ˵�
//        printf("%d\n", --l); //�������++l������l<=r����ʱl=r+1, ���Ӧ--l��������Ҷ˵�
//    }
//    return 0;
//}