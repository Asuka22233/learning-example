#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 105


int f(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}


void g(char* a, char* b) {
    char stack[MAX];
    int top = -1;
    int j = 0;

    for (int i = 0; a[i] != '\0'; i++) {
        if (isdigit(a[i])) {

            while (isdigit(a[i])) {
                b[j++] = a[i++];
            }
            b[j++] = ' ';
            i--;
        }
        else if (a[i] == '(') {

            stack[++top] = a[i];
        }
        else if (a[i] == ')') {

            while (top >= 0 && stack[top] != '(') {
                b[j++] = stack[top--];
                b[j++] = ' ';
            }
            top--;
        }
        else if (a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/') {

            while (top >= 0 && f(stack[top]) >= f(a[i])) {
                b[j++] = stack[top--];
                b[j++] = ' ';
            }
            stack[++top] = a[i];
        }
    }

    while (top >= 0) {
        b[j++] = stack[top--];
        b[j++] = ' ';
    }
    b[j] = '\0';
}

double z(char* b) {
    double stack[MAX];
    int top = -1;

    for (int i = 0; b[i] != '\0'; i++) {
        if (isdigit(b[i])) {

            double num = 0;
            while (isdigit(b[i])) {
                num = num * 10 + (b[i] - '0');
                i++;
            }
            stack[++top] = num;
        }
        else if (b[i] == '+' || b[i] == '-' || b[i] == '*' || b[i] == '/') {

            double operand2 = stack[top--];
            double operand1 = stack[top--];
            switch (b[i]) {
            case '+':
                stack[++top] = operand1 + operand2;
                break;
            case '-':
                stack[++top] = operand1 - operand2;
                break;
            case '*':
                stack[++top] = operand1 * operand2;
                break;
            case '/':
                stack[++top] = operand1 / operand2;
                break;
            }
        }
    }

    return stack[top];
}

int main() {
    char a[MAX];
    char b[MAX];


    fgets(a, MAX, stdin);

    a[strcspn(a, "=\n")] = '\0';

    g(a, b);

    double result = z(b);

    printf("%.2f\n", result);

    return 0;
}