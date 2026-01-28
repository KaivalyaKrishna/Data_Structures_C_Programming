#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *last = NULL;

struct node* createNode(int value) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(int value) {
    struct node *newNode = createNode(value);

    if (last == NULL) {
        last = newNode;
        last->next = last;
    } else {
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
    }
}

void insertBegin(int value) {
    struct node *newNode = createNode(value);

    if (last == NULL) {
        last = newNode;
        last->next = last;
    } else {
        newNode->next = last->next;
        last->next = newNode;
    }
}

void deleteBegin() {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = last->next;

    if (last == temp) {
        free(last);
        last = NULL;
    } else {
        last->next = temp->next;
        free(temp);
    }

    printf("First node deleted.\n");
}

void deleteEnd() {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = last->next;

    if (last == temp) {
        free(last);
        last = NULL;
    } else {
        while (temp->next != last)
            temp = temp->next;

        temp->next = last->next;
        free(last);
        last = temp;
    }

    printf("Last node deleted.\n");
}

void display() {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = last->next;
    printf("Circular Linked List: ");

    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != last->next);

    printf("(back to start)\n");
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    display();

    insertBegin(5);
    display();

    deleteBegin();
    display();

    deleteEnd();
    display();

    return 0;
}
