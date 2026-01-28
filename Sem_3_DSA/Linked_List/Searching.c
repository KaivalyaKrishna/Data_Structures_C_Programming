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

void search(int key) {
    struct node *temp = head;
    int position = 1;
    int found = 0;

    while (temp != NULL) {
        if (temp->data == key) {
            printf("Element %d found at position %d\n", key, position);
            found = 1;
            break;
        }
        temp = temp->next;
        position++;
    }

    if (!found)
        printf("Element %d not found in the list\n", key);
}

int main() {
    insert(30);
    insert(20);
    insert(10);

    search(20);
    search(50);

    return 0;
}
