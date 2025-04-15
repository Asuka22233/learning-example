//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//
//// ����һ���ṹ�����洢����
//typedef struct {
//    int left;
//    int right;
//    int left_inclusive;  // ��˵��Ƿ������1��ʾ������0��ʾ������
//    int right_inclusive; // �Ҷ˵��Ƿ������1��ʾ������0��ʾ������
//} Interval;
//
//// ���������ַ��������Interval�ṹ��
//int parse_interval(const char* str, Interval* interval) {
//    int len = strlen(str);
//    // ����ַ����Ƿ���ϸ�ʽҪ��
//    if (len < 5 || str[0] != '(' && str[0] != '[' || str[len - 1] != ')' && str[len - 1] != ']') {
//        return 0;
//    }
//    // ȷ����˵��Ƿ����
//    interval->left_inclusive = (str[0] == '[');
//    // ȷ���Ҷ˵��Ƿ����
//    interval->right_inclusive = (str[len - 1] == ']');
//
//    int i = 1;
//    char left_str[10] = { 0 };
//    // ��ȡ��˵��ַ�
//    while (str[i] != ',') {
//        left_str[i - 1] = str[i];
//        i++;
//    }
//    interval->left = atoi(left_str);
//
//    i++;
//    char right_str[10] = { 0 };
//    int j = 0;
//    // ��ȡ�Ҷ˵��ַ�
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
//        // ��ȡһ������
//        if (fgets(line, sizeof(line), stdin) == NULL) {
//            break;
//        }
//        // ȥ����ĩ�Ļ��з�
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
//            printf("�����ʽ�������������롣\n");
//        }
//    }
//
//    // �����ȡ��������
//    printf("��ȡ��������Ϊ:\n");
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