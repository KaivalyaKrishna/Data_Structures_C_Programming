#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, key, choice, i;

    printf("Enter the number of elements - ");
    scanf("%d", &n);

    int *a = malloc(n * sizeof(int));

    printf("Enter the elements - ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number you want to search - ");
    scanf("%d", &key);

    printf("Choose the search method\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search\n");
    scanf("%d", &choice);

    int low, high, mid, found = 0;

    switch (choice) {
        case 1:
            for (i = 0; i < n; i++) {
                if (a[i] == key) {
                    found = 1;
                    break;
                }
            }
            if (found)
                printf("Number found at position %d\n", i + 1);
            else
                printf("Number not found\n");
            break;

        case 2:
            for (i = 0; i < n - 1; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (a[j] < a[i]) {
                        int t = a[i];
                        a[i] = a[j];
                        a[j] = t;
                    }
                }
            }

            low = 0;
            high = n - 1;

            while (low <= high) {
                mid = (low + high) / 2;

                if (a[mid] == key) {
                    found = 1;
                    break;
                }
                else if (key < a[mid]) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }

            if (found)
                printf("Number found at position %d after sorting\n", mid + 1);
            else
                printf("Number not found\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
