#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

struct node* createNode(int value) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(int value) {
    struct node *newNode = createNode(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

void insertBegin(int value) {
    struct node *newNode = createNode(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void deleteBegin() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    free(temp);
    printf("First node deleted.\n");
}

void deleteEnd() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    if (temp->prev != NULL)
        temp->prev->next = NULL;
    else
        head = NULL;

    free(temp);
    printf("Last node deleted.\n");
}

void displayForward() {
    struct node *temp = head;

    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("List (Forward): ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void displayBackward() {
    struct node *temp = head;

    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    printf("List (Backward): ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    displayForward();

    insertBegin(5);
    displayForward();
    displayBackward();

    deleteBegin();
    displayForward();

    deleteEnd();
    displayForward();

    return 0;
}
