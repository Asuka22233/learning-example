//#include <stdio.h>
//int a[100005];
//void f(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//int g(int a[], int low, int high) {
//    int y = a[high]; 
//    int i = (low - 1);
//    for (int j = low; j <= high - 1; j++) {
//      
//        if (a[j] <= y) {
//            i++;  
//           f(&a[i], &a[j]);
//        }
//    }
//    f(&a[i + 1], &a[high]);
//    return (i + 1);
//}
//void cmp(int a[], int low, int high) {
//    if (low < high) {
//       
//        int x = g(a, low, high);
//
//       
//        cmp(a, low, x - 1);
//        cmp(a, x + 1, high);
//    }
//}
//
//int main() {
//    int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//   
//    cmp(a, 0, n - 1);
//	for (int i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//
//    return 0;
//}