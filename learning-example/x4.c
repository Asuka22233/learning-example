//#include <stdio.h>
//#include <stdlib.h>
//typedef struct _Interval
//{
//    int left, right; //�洢���Ҷ˵��С
//    int loc, roc; //��ʾ��/�Ҷ˵㿪���ԣ�0-����1-��
//} Interval, * pInterval;
//int cmp(const void* e1, const void* e2) //��������˵��С�������򣬵���˵���ͬʱ����������ǰ����
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
//    int n = 0; //��¼�������������
//    char l, r;
//    while (~scanf(" %c%d,%d%c", &l, &a[n].left, &a[n].right, &r))
//    {
//        a[n].loc = l == '[' ? 1 : 0;
//        a[n].roc = r == ']' ? 1 : 0;
//        ++n;
//    }
//    qsort(a, n, sizeof(Interval), cmp); //��������˵��С�������򣬵���˵���ͬʱ����������ǰ����
//
//    for (int i = 0; i < n;)
//    {
//        Interval t = a[i]; //��¼���κϲ��������ʼ��tΪ���κϲ����������
//        //ֻ������a[i]��˵�С��t�Ҷ˵㣬������a[i]��˵����t�Ҷ˵��Ҳ�ȫΪ������ʱ�����ܺϲ�
//        for (++i; i < n && (a[i].left < t.right || (a[i].left == t.right && (a[i].loc |
//            t.roc))); ++i) //����һ����ʱa[i].loc|t.rocΪ1������Ϊ����Ϊ0
//        {
//            if (a[i].right > t.right) //a[i]�Ҷ˵����t������t�Ҷ˵㼰�俪����Ϊa[i]�Ҷ˵㼰�俪��
//
//                t.right = a[i].right, t.roc = a[i].roc;
//            else if (a[i].right == t.right) //a[i]�Ҷ˵����t������t�Ҷ˵�Ŀ����ԣ�a[i]��t����һ
//
//                t.roc |= a[i].roc;
//            //��a[i]�Ҷ˵�С��t������Ҫ�ı�t
//        }
//        printf("%c%d,%d%c\n", t.loc ? '[' : '(', t.left, t.right, t.roc ? ']' : ')'); //��
//
//    }
//    return 0;
//}