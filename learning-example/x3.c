#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
	int x;
	p y;
} P,*p;
 void f(int d,p a)
{
	 p b = a;
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

		}
		if (op == 0)
		{

		}
	}

	return 0;
}