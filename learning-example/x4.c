#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a[105];
int f(int x)
{
	int dp[1000] = { 0 };
	dp[0] = 1;
	for (int i = 1; i <= x; i++) {
		if (i - 1 >= 0) {
			dp[i] += dp[i - 1];
		}
		if (i - 2 >= 0) {
			dp[i] += dp[i - 2];
		}
		if (i - 3 >= 0) {
			dp[i] += dp[i - 3];
		}
		if (i - 4 >= 0) {
			dp[i] += dp[i - 4];
		}
	}
	return dp[x];

	
}
int main()
{
	int n;
	scanf("%d", &n);
	
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", f(a[i]));
	}
	
	return 0;
}