#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int k;
int f[10004];
int st[10004];
int top;
int l[1004], r[1003];
int main() {
	scanf("%d", k);
	for (int i = 1;i <= k;i++)
		scanf("%d", &f[i]);
	top = 0;
	for (int i = 1;i <= k;i++) {

		while (top && f[st[top]] <= f[i])
			top--;
		if (top)
			l[i] = st[top];
		st[++top] = i;
	}
	top = 0;
	for (int i = k;i ;i--) {

		while (top && f[st[top]] <= f[i])
			top--;
		if (top)
			r[i] = st[top];
		st[++top] = i;
	}
	for (int i = 1;i <= k;i++)
		printf("%d %d\n", l[i], r[i]);
	return 0;


}