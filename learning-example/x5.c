#include<stdio.h>
#include<stdlib.h>
int popcount(int x) {
	int sum = 0;
	for (int i = 0;i < 32;i++) {
		sum += x >> i & 1;
	}
	return sum;
}
int cmp(const void* p, const void* q) {
	int x = *(int*)p,
		y = *(int*)q;
	int cntx = popcount(x),
		cnty = popcount(y);
	if (cntx > cnty) return 1;
	if (cntx < cnty) return -1;
	if (y > x) return 1;
	if (x > y) return -1;
	return 0;


}
int a[100000];
int main() {

	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &a[i]);

	}
	qsort(a, n, sizeof(int), cmp);
	for (int i = 0;i < n;i++)
		printf("%d %d", a[i], popcount(a[i]));
	return 0;


}