#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

int isFull() {
    return top == MAX - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int value) {
    if (isFull()) {
        printf("Stack is full! Can't add %d.\n", value);
        return;
    }
    stack[++top] = value;
    printf("%d added to the stack.\n", value);
}

void pop() {
    if (isEmpty()) {
        printf("Stack is empty! Nothing to remove.\n");
        return;
    }
    printf("Removed element: %d\n", stack[top--]);
}

void peek() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Top element is: %d\n", stack[top]);
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements (from top to bottom): ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Stack Operations ---\n");
        printf("1. Add an element (Push)\n");
        printf("2. Remove top element (Pop)\n");
        printf("3. See top element (Peek)\n");
        printf("4. Show all elements (Display)\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number to add: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Goodbye!\n");
                exit(0);

            default:
                printf("Invalid option! Please try again.\n");
        }
    }
}
