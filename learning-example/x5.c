#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char str[100000][105];
int len[100000];
int id[100000];

int cmp(const void* p1,const void* p2)
{
	int a = *(int*)p1, b = *(int*)p2;
	if (len[a] < len[b]) return 1;
	else if (len[a] > len[b])
		return -1;
	else return strcmp(str[a], str[b]);

}








int main() {
	int n;
	scanf("%d", &n);
	getchar();
	for (int i = 0;i < n;i++) {
		gets(str[i]);
		len[i] = strlen(str[i]);
		id[i] = i;

	}
	qsort(id, n, sizeof(int), cmp);
	for (int i = 0;i < n;++i) {
		puts(str[id[i]]);

	}
	return 0;
}