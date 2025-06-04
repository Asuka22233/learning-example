#include<stdio.h>
#include<stdlib.h>
int cmp(const void* p1, const void* p2) {
	int* a = (int*)p1, * b = (int*)p2;
	if (*a < *b)return -1;
	else if (*a > *b)return 1;
	else return 0;

}
int a[1000005];
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;++i) {
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	int old = a[0];
	printf("%d ", old);
	for (int i = 1;i < n;++i) {
		if (old == a[i]) continue;
		printf("%d ", a[i]);
		old = a[i];
	}
	return 0;

}