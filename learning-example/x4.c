//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define a 200005
//int b[a];
//void f(int val, int i,int r) 
//{
//	int x = 0;
//	int q = 0;
//	int w = 0;
//	int y = 0;
//	for (int k = i; k >= 0; k--)
//	{
//		if (b[k] > val) 
//		{
//			x = k;
//			q = 1;
//			break;
//		}
//	}
//	for (int k = i; k < r; k++)
//	{
//		if (b[k] > val)
//		{
//			y = k;
//			w = 1;
//			break;
//			
//		}
//	}
//	if (q == 0)
//	{
//		x = -1;
//	}
//	if (w == 0)
//	{
//		y = -1;
//	}
//	
//	printf("%d %d\n", x+1, y+1);
//	return;
//}
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	for (int i = 0; i < k; i++)
//	{
//		f(b[i], i,k);
//	}
//
//    return 0;
//}