#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int ElemType;
int maxsize;
ElemType stack[10000];
int top = -1;
int isEmpty()
{
	return top == -1;
}
int isFull()
{
	return top == maxsize - 1;
}
void Error(char s[]) {
	puts(s);
	exit(-1);

}
void push(ElemType item) {
	if (isFull())
		Error("Full Stack!");
	else
		stack[++top] = item;


}
ElemType pop() {
	if (isEmpty())
		Error("Empty Stack!");
	else
		return stack[top--];

}
int main()
{
	int m;

	scanf("%d%d", &maxsize, &m);
	while (m--) {

		char op[10];
		scanf("%s", op);
		if (strcmp(op, "show") == 0) {
			printf("%d\nStack:", top + 1);
			for (int i = 0;i <= top;++i)
				printf("%d ", stack[i]);
			putchar('\n');

		}
		else if (strcmp(op, "push") == 0) {
			int item=0;
			scanf("%d", item);
			push(item);

		}
		else {
			printf("%d", pop());
		}
	}
	return 0;

}
