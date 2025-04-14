//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _Interval
//{
//    int left, right; //存储左右端点大小
//    int loc, roc; //表示左/右端点开闭性，0-开，1-闭
//} Interval, * pInterval;
//int cmp(const void* e1, const void* e2) //按区间左端点大小升序排序，当左端点相同时，闭区间在前，开
//
//{
//    pInterval p = (pInterval)e1, q = (pInterval)e2;
//    if (p->left > q->left) return 1;
//    if (p->left < q->left) return -1;
//    if (p->loc < q->loc) return 1;
//    if (p->loc > q->loc) return -1;
//    return 0;
//}
//Interval a[500005];
//int main()
//{
//    int n = 0; //记录输入的区间数量
//    char l, r;
//    while (~scanf(" %c%d,%d%c", &l, &a[n].left, &a[n].right, &r))
//    {
//        a[n].loc = l == '[' ? 1 : 0;
//        a[n].roc = r == ']' ? 1 : 0;
//        ++n;
//    }
//    qsort(a, n, sizeof(Interval), cmp); //按区间左端点大小升序排序，当左端点相同时，闭区间在前，开
//
//    for (int i = 0; i < n;)
//    {
//        Interval t = a[i]; //记录本次合并结果，初始化t为本次合并的最初区间
//        //只有区间a[i]左端点小于t右端点，或区间a[i]左端点等于t右端点且不全为开区间时，才能合并
//        for (++i; i < n && (a[i].left < t.right || (a[i].left == t.right && (a[i].loc |
//            t.roc))); ++i) //至少一个闭时a[i].loc|t.roc为1，若均为开则为0
//        {
//            if (a[i].right > t.right) //a[i]右端点大于t，更新t右端点及其开闭性为a[i]右端点及其开闭
//
//                t.right = a[i].right, t.roc = a[i].roc;
//            else if (a[i].right == t.right) //a[i]右端点等于t，更新t右端点的开闭性（a[i]和t中有一
//
//                t.roc |= a[i].roc;
//            //若a[i]右端点小于t，则不需要改变t
//        }
//        printf("%c%d,%d%c\n", t.loc ? '[' : '(', t.left, t.right, t.roc ? ']' : ')'); //输
//
//    }
//    return 0;
//}