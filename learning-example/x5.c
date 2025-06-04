#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* s[10005];
char str[1005];
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	getchar();
	for (int i = 1; i <= n;i++)
	{
		gets(str);
		int len = strlen(str);
		s[i] = (char*)malloc((len + 1) * sizeof(char));
		strcpy(s[i], str);
	}
	for (int i = 1;i <= m;i++) {
		int u, v;
		scanf("%d%d", &u, &v);
		char* x = s[u];
		s[u] = s[v];
		s[v] = x;


	}
	for (int i = 1;i <= n;i++)
	{
		puts(s[i]);
		free(s[i]);
	}

	return 0;
}

