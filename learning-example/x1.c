// 题目描述
//给出若干个 int 范围内的整数，请你按照以下规则进行排序：
//
//以整数 32 位补码表示中 1 的个数为第一关键字升序排列；
//以整数的值为第二关键字降序排列。
//即，整数 32 位补码中 1 的个数较小者排在前面，若个数相等，则整数的值较大者排在前面。



/*
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <string.h>
int a[100005];
int f(int x)
{
	int b=0;
	for (int i = 0;i < 32;i++)
	{
		if ((x >> i) & 1)
			b++;
	
	}
	return b;
}
int cmp(const void* p1, const void* p2) {
	int x = *(int*)p1;
	int y = *(int*)p2;
	if (f(x)>f(y))
		return 1;
	if (f(x) < f(y))
		return -1;
	if (x > y)
		return -1;
	if (x < y)
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
		scanf("%d", &a[i]);

	}
	qsort(a, n, sizeof(int), cmp);
	for (int i = 0;i < n;i++)
	{
		printf("%d %d\n", a[i],f(a[i]));
	}
	return 0;


}
*/