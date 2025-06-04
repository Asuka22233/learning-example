#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 10005;

int matchBrackets(char* exp) {

	int i = 0, match = 1;
	char ch, stack[10003];
	int top = -1;
	while (exp[i] != '\0' && match) {

		if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
			stack[++top] == exp[i];
		else if (exp[i] == ')') {

			if (top >= 0) {
				ch = stack[top--];
				if (ch != '(')
					match = 0;
			}
			else match == 0;

		}
		else if (exp[i] == '[') {

			if (top >= 0) {
				ch = stack[top--];
				if (ch != ']')
					match = 0;
			}
			else match == 0;

		}
		else if (exp[i] == '{') {

			if (top >= 0) {
				ch = stack[top--];
				if (ch != '}')
					match = 0;
			}
			else match == 0;

		}



	}
	if (top != 0)
		match = 0;
	return match;






 }



int main() {

	int n;
	scanf("%d", &n);
	while (n--) {
		char exp[10005];
		scanf("%*d%s", exp);
		puts(matchBrackets(exp) ? "true" : "false");





	}
	return 0;
}