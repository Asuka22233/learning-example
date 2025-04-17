#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<ctype.h>
int a[100005];
void insertSorted(int arr[], int* n, int num) {
	int x = 0, y = *n - 1;
	int z = 0;

	// 二分查找插入位置
	while (x <= y) {
		int mid = x + (y - x) / 2;
		if (arr[mid + 1] > num && arr[mid - 1] < num)
		{
			z = mid;
			break;
		}
		if (arr[mid] < num) {
			x = mid + 1;
		}
		if (arr[mid] == num) {
			z = mid;
			break;
		}
		else {
			y = mid - 1;
	}
	}

	
	for (int i = *n; i > z; i--) {
		arr[i] = arr[i - 1];
	}

	
	arr[z] = num;
	(*n)++;
	
}
void f(int n)
{
	
	printf("%d\n", a[n-1]);
}
int cmp(const void* p1, const void* p2) {
	int x = *(int*)p1;
	int y = *(int*)p2;
	if (x > y)
		return 1;
	if (x < y)
		return -1;
	else
		return 0;
}
int main()
{
	int n, m;
	char s[100];
	scanf("%d %d", &m, &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	for (int i = 0; i < m; i++)
	{
		scanf("%s", s);
		if (strcmp(s, "pop") == 0)
		{
			
			printf("%d\n", a[n - 1]);
			n--;
			if (n == 0)
			{
				printf("heap underflow\n");
				exit(0);
			}
			
			
			
		}
		if (strcmp(s, "max") == 0)
			f(n);
		if (strcmp(s, "push") == 0)
		{
			
			int x;
			scanf("%d",&x);
			insertSorted(a, &n, x);
			

		}
			
	
	}
	
	for (int i = n-1; i >=0; i--)
	{
		printf("%d ", a[i]);
	}



	return 0;
}