#include<stdio.h>
#include<stdlib.h>

void ExGCD(int a, int b, int* d, int* x, int* y) {
	if (b == 0) {
		*d = a, * x = 1, * y = 0;
		return;

	}
	int dd, xx, yy;
	ExGCD(b, a % b, &dd, &xx, &yy);
	*d = dd, * x = yy, * y = xx - a / b * yy;



}



int main() {
	int a, b, d, x, y;
	scanf("%d%d", &a, &b);
	ExGCD(a, b, &d, &x, &y);
	printf("%d=%d*(%d)+%d*(%d)", d, a, x, b, y);
	return 0;
}