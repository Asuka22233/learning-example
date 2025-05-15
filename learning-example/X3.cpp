//#include <bits/stdc++.h>
//using namespace std;
//
//class myComplex
//{
//private:
//	double r, i; // r为实部，i为虚部
//
//public:
//	myComplex(double a = 0, double b = 0)
//	{
//		r = a;
//		i = b;
//		// TODO:使用两个浮点数实例化一个myComplex类
//	}
//	myComplex operator+(const myComplex& A)
//	{
//		return myComplex(r + A.r, i + A.i);
//		// TODO:+的运算符重载
//	}
//	myComplex operator-(const myComplex& A)
//	{
//		return myComplex(r - A.r, i - A.i);
//		// TODO:-的运算符重载
//	}
//	myComplex operator*(const myComplex& A)
//	{
//		double real = r * A.r - i * A.i;
//		double imag = r * A.i + i * A.r;
//		return myComplex(real, imag);
//		// TODO:*的运算符重载
//	}
//	myComplex operator/(const myComplex& A)
//	{
//		double denominator = A.r * A.r + A.i * A.i;
//		double real = (r * A.r + i * A.i) / denominator;
//		double imag = (i * A.r - r * A.i) / denominator;
//		return myComplex(real, imag);
//		// TODO:/的运算符重载
//	}
//	void print() {
//	
//		if (i >= 0)
//			printf("%.2f+%.2fi\n", r, i);
//		else
//			
//		printf("%.2f%.2fi\n", r,i);
//		// TODO:输出复数
//		
//	}
//};
//
//int main()
//{
//	double a, b, c, d;
//	cin >> a >> b >> c >> d;
//	myComplex A(a, b), B(c, d), C;
//	C = A + B;
//	C.print();
//	C = A - B;
//	C.print();
//	C = A * B;
//	C.print();
//	C = A / B;
//	C.print();
//	return 0;
//}