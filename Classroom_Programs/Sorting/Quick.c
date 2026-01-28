#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements of the array - ");
    scanf("%d", &n);

    int *a = malloc(n * sizeof(int));
    int *stack = malloc(n * sizeof(int));

    printf("Enter the elements of the array - ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("The array is - \n");
    for (int i = 0; i < n; i++) {
        printf("%d \t", a[i]);
    }

    int top = -1;
    stack[++top] = 0;
    stack[++top] = n - 1;

    while (top >= 0) {
        int high = stack[top--];
        int low = stack[top--];

        int pivot = a[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; j++) {
            if (a[j] <= pivot) {
                i++;
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }

        int t = a[i + 1];
        a[i + 1] = a[high];
        a[high] = t;

        int p = i + 1;

        if (p - 1 > low) {
            stack[++top] = low;
            stack[++top] = p - 1;
        }
        if (p + 1 < high) {
            stack[++top] = p + 1;
            stack[++top] = high;
        }
    }

    printf("\n");
    printf("The sorted array is - \n");
    for (int i = 0; i < n; i++) {
        printf("%d \t", a[i]);
    }

    return 0;
}
