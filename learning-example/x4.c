#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 500000
#define STR_LEN 4


int binary_search(int a[], int n, int target) {
    int left = 0;
    int right = n - 1;

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
    return left;
}

int main() {
    int a[MAX_SIZE];
    int n = 0;
    char str[STR_LEN + 1];

    while (scanf("s", str)!=EOF) {
      
        int x = (str[0] - 'a' + 1) * 1000000 + (str[1] - 'a' + 1) * 10000 + (str[2] - 'a' + 1) * 100 + (str[3] - 'a' + 1);
        int pos = binary_search(a, n, x);

        if (pos < n&& a[pos] == x) {
            printf("Repeated!\n");
        }
        else {
           
            for (int i = n; i > pos; i--) {
                a[i] = a[i - 1];
            }
            a[pos] = x;
            n++;
            printf("Ciallo~\n");
        }
    }

    return 0;
}