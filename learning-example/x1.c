
#include <stdio.h>
#include <stdlib.h>



#include <string.h>
char str[1000][105];
int len[1000];
int id[1000];
int cmp(const void* p1, const void* p2) {
	int x = *(int*)p1;
	int y = *(int*)p2;
	if (len[x]>len[y])
		return -1;
	if (len[x] < len[y])
		return 1;
	else
		return 0;

}

int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	for (int i = 0;i < n;i++)
	{
		gets_s(str[i], 105);
		len[i] = strlen(str[i]);
		id[i] = i;

	}
	qsort(id, n, sizeof(int), cmp);
	for (int i = 0;i < n;i++)
	{
		puts(str[id[i]]);
	}
	return 0;


}