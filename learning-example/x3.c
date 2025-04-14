//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct _interval
//{
//    int l;
//    int r;
//    int lx;
//    int rx;
//
//
//} x, * y;
//int cmp(const void* h, const void* j)
//{
//	x* aa = (x*)h;
//	x* bb = (x*)j;
//    if (aa->l > bb->l)
//        return 1;
//    if(aa->l<bb->l)
//
//		return -1;
//    if(aa->lx>bb->lx)
//		return 1;
//    if(aa->lx<bb->lx)
//		return -1;
//    return 0;
//
//
//	
//}   
//x a[100005];
//int main()
//
//{
//    int n = 0;
//    char u,i;
//
//    while ((scanf("%c%d,%d%c", &u,&a[n].l,&a[n].r,&i) != EOF))
//    {
//        if (u == '[')
//            a[n].lx = 1;
//        else
//            a[n].lx = 0;
//        if (i == '[')
//            a[n].rx = 1;
//        else
//            a[n].rx = 0;
//
//        n++;
//    }
//	qsort(a, n, sizeof(x), cmp);
//   
//    for (int d = 0;d < n;)
//    {
//		x p = a[d];
//        for (++d;d < n && (a[d].l < p.r || (a[d].l == p.r && a[d].lx < p.rx));d++)
//        {
//			if (a[d].r > p.r)
//			{
//				p.r = a[d].r;
//				p.rx = a[d].rx;
//			}
//            else if (a[d].r == p.r && a[d].rx > p.rx)
//            {
//				p.rx = a[d].rx;
//            }
//				
//			
//
//        }
//		printf("%c%d,%d%c\n", p.lx == 1 ? '[' : '(', p.l, p.r, p.rx == 1 ? ']' : ')');
//
//    }
//}