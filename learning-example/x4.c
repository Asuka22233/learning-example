#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int a[500000];
int binary_search(int a[], int n, int target) {
	int left = 0;
	int right = n-1 ;

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (a[mid] == target) {
			return mid;
		}
		else if (a[mid] < target) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}

	return -1;
}
int cmp(const void* p1, const void* p2) {
	int x = *(int*)p1;
	int y = *(int*)p2;
	if (x > y)
		return 1;
	if (x < y)
		return -1;
	else
		return 0;
}

int main() {
	int n = 0;
	char str[4];
	while (scanf("%s",str) != EOF) {
		int x;
		x = (str[0] - 'a'+1)*1000000+ (str[1] - 'a' + 1) * 10000+ (str[2] - 'a' + 1) * 100+ (str[3] - 'a' + 1);
		if (n == 0) {
			a[n] = x;
			n++;
			printf("Ciallo~\n");
		}
		else {
			int y = binary_search(a, n, x);
			if (y == -1) {
				
				a[n] = x;
				n++;
				qsort(a, n, sizeof(int), cmp);
				
				
				printf("Ciallo~\n");
			}
			else {
				printf("Repeated!\n");
			}

			
		}

	}

    return 0;
}