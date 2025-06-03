#include <stdio.h>
#define N 200005
int k;
int f[N];
int st[N], top; // st(ack)：栈；top：栈顶，0表示栈为空
int l[N], r[N]; // l：左侧答案；r：右侧答案
int main() {
	scanf("%d", &k);
	for (int i = 1; i <= k; i++)
		scanf("%d", &f[i]);
	top = 0;
	for (int i = 1; i <= k; i++) { // 使用栈求出左侧答案
		while (top && f[st[top]] <= f[i])
			top--;
		if (top)
			l[i] = st[top];
		st[++top] = i;
	}
	top = 0;
	for (int i = k; i; i--) { // 对称地，求出右侧答案
		while (top && f[st[top]] <= f[i])
			top--;
		if (top)
			r[i] = st[top];
		st[++top] = i;
	}
	for (int i = 1; i <= k; i++)
		printf("%d %d\n", l[i], r[i]);
	return 0;
}
