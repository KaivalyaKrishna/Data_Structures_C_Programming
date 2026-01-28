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

int countNodes() {
    int count = 0;
    struct node *temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

int main() {
    insert(10);
    insert(20);
    insert(30);

    printf("Total nodes in the list = %d\n", countNodes());

    return 0;
}
