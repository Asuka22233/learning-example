//#include <bits/stdc++.h>
//using namespace std;
//
//class myComplex
//{
//private:
//	double r, i; // rΪʵ����iΪ�鲿
//
//public:
//	myComplex(double a = 0, double b = 0)
//	{
//		r = a;
//		i = b;
//		// TODO:ʹ������������ʵ����һ��myComplex��
//	}
//	myComplex operator+(const myComplex& A)
//	{
//		return myComplex(r + A.r, i + A.i);
//		// TODO:+�����������
//	}
//	myComplex operator-(const myComplex& A)
//	{
//		return myComplex(r - A.r, i - A.i);
//		// TODO:-�����������
//	}
//	myComplex operator*(const myComplex& A)
//	{
//		double real = r * A.r - i * A.i;
//		double imag = r * A.i + i * A.r;
//		return myComplex(real, imag);
//		// TODO:*�����������
//	}
//	myComplex operator/(const myComplex& A)
//	{
//		double denominator = A.r * A.r + A.i * A.i;
//		double real = (r * A.r + i * A.i) / denominator;
//		double imag = (i * A.r - r * A.i) / denominator;
//		return myComplex(real, imag);
//		// TODO:/�����������
//	}
//	void print() {
//	
//		if (i >= 0)
//			printf("%.2f+%.2fi\n", r, i);
//		else
//			
//		printf("%.2f%.2fi\n", r,i);
//		// TODO:�������
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