#include <stdio.h>
#define N 200005
int k;
int f[N];
int st[N], top; // st(ack)��ջ��top��ջ����0��ʾջΪ��
int l[N], r[N]; // l�����𰸣�r���Ҳ��
int main() {
	scanf("%d", &k);
	for (int i = 1; i <= k; i++)
		scanf("%d", &f[i]);
	top = 0;
	for (int i = 1; i <= k; i++) { // ʹ��ջ�������
		while (top && f[st[top]] <= f[i])
			top--;
		if (top)
			l[i] = st[top];
		st[++top] = i;
	}
	top = 0;
	for (int i = k; i; i--) { // �ԳƵأ�����Ҳ��
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
