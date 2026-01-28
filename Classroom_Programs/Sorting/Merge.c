#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements of the array - ");
    scanf("%d", &n);

    int *a = malloc(n * sizeof(int));
    int *temp = malloc(n * sizeof(int));

    printf("Enter the elements of the array - ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("The array is - \n");
    for (int i = 0; i < n; i++) {
        printf("%d \t", a[i]);
    }

    int size, left, mid, right;

    for (size = 1; size < n; size = size * 2) {
        for (left = 0; left < n - 1; left += 2 * size) {
            mid = left + size - 1;
            if (mid >= n - 1) continue;
            right = left + 2 * size - 1;
            if (right >= n) right = n - 1;

            int i = left, j = mid + 1, k = left;

            while (i <= mid && j <= right) {
                if (a[i] <= a[j]) {
                    temp[k++] = a[i++];
                } else {
                    temp[k++] = a[j++];
                }
            }

            while (i <= mid) temp[k++] = a[i++];
            while (j <= right) temp[k++] = a[j++];

            for (int x = left; x <= right; x++) {
                a[x] = temp[x];
            }
        }
    }

    printf("\n");
    printf("The sorted array is - \n");
    for (int i = 0; i < n; i++) {
        printf("%d \t", a[i]);
    }

    return 0;
}
