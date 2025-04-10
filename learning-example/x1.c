
#include <stdio.h>
#include <stdlib.h>

#include <string.h>
int cmp(const void* p1, const void* p2) {
	int x = *(int*)p1;
	int y = *(int*)p2;
	if (x < y)
		return -1;
	if (x > y)
		return 1;
	else
		return 0;

}
int a[10000];
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	int old = a[0];
	printf("%d ", old);
	for (int i = 1;i < n;i++)
	{
		if (old == a[i]) continue;
		printf("%d ", a[i]);
		old = a[i];

	}


}