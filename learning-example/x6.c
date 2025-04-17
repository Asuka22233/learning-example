//#include <stdio.h>
//#include <stdlib.h>
//#define N 500005
//
//// ��������
//int parent(int i) { return i / 2; } // ������ṹ�Ķ������У����ؽ��i�ĸ��ڵ��±�
//int left(int i) { return 2 * i; } // i�����ӽڵ��±�
//int right(int i) { return 2 * i + 1; } // i�����ӽڵ��±�
//void exchange(int* a, int* b) { // ����a��bָ���ڵ���
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//
//int A[N], heapsize;
//void max_heapify(int A[], int i) {
//	int l = left(i), r = right(i), largest;
//	if (l <= heapsize && A[l] > A[i]) {
//		largest = l;
//	}
//	else {
//		largest = i;
//	}
//	if (r <= heapsize && A[r] > A[largest]) {
//		largest = r;
//	}
//	if (largest != i) {
//		exchange(&A[i], &A[largest]);
//		max_heapify(A, largest);
//	}
//
//   
//}
//
//void build_max_heap(int A[]) {
//   
//	for (int i = heapsize / 2; i >= 1; i--) {
//		max_heapify(A, i);
//	}
//}
//
//int heap_maximum(int A[]) {
//    
//	
//	return A[1];
//}
//
//int heap_extract_max(int A[]) {
//    
//	if (heapsize < 1) {
//		printf("heap underflow\n");
//		exit(0);
//	}
//	int max = A[1];
//	A[1] = A[heapsize];
//	heapsize--;
//	max_heapify(A, 1);
//	return max;
//}
//
//void max_heap_insert(int A[], int key) {
//   
//	heapsize++;
//	A[heapsize] = -1; // �Ƚ����һ��Ԫ����Ϊ-1
//	increase_key(A, heapsize, key);
//}
//
//int main() {
//    int n, m;
//    scanf("%d %d", &n, &m);
//    for (int i = 1; i <= m; i++)
//        scanf("%d", &A[i]);
//    // ����
//    heapsize = m;
//    build_max_heap(A);
//
//    for (int i = 0; i < n; i++) {
//        char op[10];
//        scanf("%s", op);
//        int key;
//        switch (op[1]) {
//        case 'a': // max
//            printf("%d\n", heap_maximum(A));
//            break;
//        case 'o': // pop
//            printf("%d\n", heap_extract_max(A));
//            break;
//        case 'u': // push
//            scanf("%d", &key);
//            max_heap_insert(A, key);
//            break;
//        }
//    }
//    while (heapsize) { // �������Ԫ��
//        printf("%d ", heap_extract_max(A));
//    }
//
//    return 0;
//}