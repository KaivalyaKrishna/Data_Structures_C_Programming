#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void display(int arr[], int n) {
    if (n == 0) {
        printf("The array is empty.\n");
        return;
    }

    printf("Current elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insert(int arr[], int n, int pos, int element) {
    if (n >= MAX) {
        printf("No space left! Cannot insert more elements.\n");
        return n;
    }

    if (pos < 0 || pos > n) {
        printf("That position doesn't exist!\n");
        return n;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    printf("Added %d at position %d.\n", element, pos);
    return n + 1;
}

int delete(int arr[], int n, int pos) {
    if (n == 0) {
        printf("Nothing to delete, the array is empty.\n");
        return n;
    }

    if (pos < 0 || pos >= n) {
        printf("That position doesn't exist!\n");
        return n;
    }

    printf("Removed element: %d\n", arr[pos]);

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return n - 1;
}

int main() {
    int arr[MAX];
    int n = 0, choice, element, pos;

    while (1) {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Add an element\n");
        printf("2. Remove an element\n");
        printf("3. Show all elements\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number you want to add: ");
                scanf("%d", &element);
                printf("Enter the position (0 to %d): ", n);
                scanf("%d", &pos);
                n = insert(arr, n, pos, element);
                break;

            case 2:
                printf("Enter the position to remove (0 to %d): ", n - 1);
                scanf("%d", &pos);
                n = delete(arr, n, pos);
                break;

            case 3:
                display(arr, n);
                break;

            case 4:
                printf("Goodbye!\n");
                exit(0);

            default:
                printf("Invalid option! Please try again.\n");
        }
    }
}
