//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _Interval
//{
//    int left;
//    int right;
//
//} Interval, * pInterval;
//int cmp(const void* e1, const void* e2) 
//
//{
//    pInterval p = (pInterval)e1, q = (pInterval)e2;
//    if (p->left > q->left) return 1;
//    if (p->left < q->left) return -1;
//
//    return 0;
//}
// Interval a[100005];
//
//int main()
//{
//    int n = 0; 
// 
//    while ((scanf("%d %d", &a[n].left, &a[n].right))!=EOF)
//    {
//       
//        n++;
//    }
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%d %d\n", a[i].left, a[i].right);
//	}
//	
//     qsort(a, n, sizeof(Interval), cmp); 
//
//        for (int i = 0; i < n;)
//        {
//            Interval t = a[i]; 
//           
//            for (++i; i < n && a[i].left < t.right ; ++i) 
//            {
//                if (a[i].right > t.right) 
//                    t.right = a[i].right;
//              
//            }
//            printf("%d %d\n",t.left,t.right); 
//        }
//    return 0;
//}
