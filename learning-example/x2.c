/*

#include<stdio.h>
void ExGCD(int a, int b, int* d, int* x, int* y)
{
    if (b == 0)
    {
		*d = a; //��a����dָ��ı���
		*x = 1; //��1����xָ��ı���
        *y = 0;

        //��(a,1,0)�ֱ𸳸�d,x,yָ��ı���
        return;
    }
    int dd, xx, yy; //�ֱ����α�����е�d',x',y'
	ExGCD(b, a % b, &dd, &xx, &yy); //�ݹ����ExGCD����
	*d = dd; //��dd����dָ��ı���
	*x = yy; //��yy����xָ��ı���
    
	*y = xx - (a / b) * yy; //��xx-(a/b)*yy����yָ��ı���

   
}
int main()
{
    int a, b, d, x, y;
	scanf("%d %d", &a, &b); //����
	ExGCD(a, b, &d, &x, &y); //����ExGCD����������d,x,y�ġ���ַ����ü�����
	printf("%d =%d*(%d) + %d*(%d)\n", d, a,x,b, y); //���
    
    
    //����
    //����ExGCD����������d,x,y�ġ���ַ����ü�����
    //���
    return 0;
}
*/
//ŷ������㷨
//��չŷ������㷨