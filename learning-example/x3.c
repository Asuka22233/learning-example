/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct hj{
	int x;
	struct hj *y;
} P,*p;
 void f(int d,p a)
{
	 a->y = (p)malloc(sizeof(P));
	 p b = a->y;
	 for (int i = 0; i < d; i++)
	 {
		 p c = (p)malloc(sizeof(P));
		 scanf("%d", &c->x);
		 b->y = c;
		 b = c;
	 }
	 b->y = NULL;
	 return;


}
 void g(p a, int k, int l)
 {
	 p b = a;
	 for (int i = 0; i < k; i++)
	 {
		 b= b->y;
	 }
	 if (b != NULL)
	 {
		 p c = (p)malloc(sizeof(P));
		 c->x = l;
		 c->y = b->y;
		 printf("Success!\n");
	 }
	 else
	 {
		 printf("Fail!\n");
	 }
 }
 void h(p a, int k, int l)
 {
	 p b = a->y;
	 while (b != NULL)
	 {
		 if (b->x == k)
		 {
			 p c = (p)malloc(sizeof(P));
			 c->x = l;
			 c->y = b->y;
			 printf("Success!\n");
			 return;
		 }
		 b = b->y;
	 }
	 if (b == NULL)
	 {
		 printf("Fail!\n");
	 }

 }
 void pt(p a)
 {
	 p b = a->y;
	 while (b != NULL)
	 {
		 printf("%d ", b->x);
		 b = b->y;
	 }
	 printf("\n");
 }

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	p a = (p)malloc(sizeof(P) );
	f(n, a);
	for (int i = 0; i < m; i++)
	{
		int op, k, l;
		scanf("%d %d %d", &op, &k, &l);
		if (op == 1)
		{
			g(a, k, l);
		}
		if (op == 0)
		{
			h(a, k, l);

		}
	}
	pt(a);

	return 0;
}
*/