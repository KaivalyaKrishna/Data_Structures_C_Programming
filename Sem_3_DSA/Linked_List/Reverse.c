#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int value) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void reverse() {
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

void display() {
    struct node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);

    printf("Original List: ");
    display();

    reverse();

    printf("Reversed List: ");
    display();

    return 0;
}
