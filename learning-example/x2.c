/*

#include<stdio.h>
void ExGCD(int a, int b, int* d, int* x, int* y)
{
    if (b == 0)
    {
		*d = a; //将a赋给d指向的变量
		*x = 1; //将1赋给x指向的变量
        *y = 0;

        //将(a,1,0)分别赋给d,x,y指向的变量
        return;
    }
    int dd, xx, yy; //分别代表伪代码中的d',x',y'
	ExGCD(b, a % b, &dd, &xx, &yy); //递归调用ExGCD函数
	*d = dd; //将dd赋给d指向的变量
	*x = yy; //将yy赋给x指向的变量
    
	*y = xx - (a / b) * yy; //将xx-(a/b)*yy赋给y指向的变量

   
}
int main()
{
    int a, b, d, x, y;
	scanf("%d %d", &a, &b); //读入
	ExGCD(a, b, &d, &x, &y); //调用ExGCD函数，传入d,x,y的【地址】获得计算结果
	printf("%d =%d*(%d) + %d*(%d)\n", d, a,x,b, y); //输出
    
    
    //读入
    //调用ExGCD函数，传入d,x,y的【地址】获得计算结果
    //输出
    return 0;
}
*/
//欧几里得算法
//扩展欧几里得算法