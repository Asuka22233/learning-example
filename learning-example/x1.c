// ��Ŀ����
//�������ɸ� int ��Χ�ڵ����������㰴�����¹����������
//
//������ 32 λ�����ʾ�� 1 �ĸ���Ϊ��һ�ؼ����������У�
//��������ֵΪ�ڶ��ؼ��ֽ������С�
//�������� 32 λ������ 1 �ĸ�����С������ǰ�棬��������ȣ���������ֵ�ϴ�������ǰ�档



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