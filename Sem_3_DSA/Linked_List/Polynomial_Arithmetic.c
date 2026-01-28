#include <stdio.h>
#include <stdlib.h>

struct node {
    int coeff;
    int pow;
    struct node *next;
};

struct node *createNode(int c, int p) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->coeff = c;
    newNode->pow = p;
    newNode->next = NULL;
    return newNode;
}

void append(struct node **head, int c, int p) {
    struct node *newNode = createNode(c, p);

    if (*head == NULL)
        *head = newNode;
    else {
        struct node *temp = *head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }
}

struct node *addPoly(struct node *p1, struct node *p2) {
    struct node *result = NULL;

    while (p1 != NULL && p2 != NULL) {
        if (p1->pow > p2->pow) {
            append(&result, p1->coeff, p1->pow);
            p1 = p1->next;
        } 
        else if (p1->pow < p2->pow) {
            append(&result, p2->coeff, p2->pow);
            p2 = p2->next;
        } 
        else {
            append(&result, p1->coeff + p2->coeff, p1->pow);
            p1 = p1->next;
            p2 = p2->next;
        }
    }

    while (p1 != NULL) {
        append(&result, p1->coeff, p1->pow);
        p1 = p1->next;
    }

    while (p2 != NULL) {
        append(&result, p2->coeff, p2->pow);
        p2 = p2->next;
    }

    return result;
}

void display(struct node *poly) {
    while (poly != NULL) {
        printf("%dx^%d", poly->coeff, poly->pow);
        poly = poly->next;
        if (poly != NULL)
            printf(" + ");
    }
    printf("\n");
}

int main() {
    struct node *poly1 = NULL, *poly2 = NULL, *sum = NULL;

    append(&poly1, 3, 2);
    append(&poly1, 2, 1);
    append(&poly1, 1, 0);

    append(&poly2, 4, 1);
    append(&poly2, 2, 0);

    printf("Polynomial 1: ");
    display(poly1);

    printf("Polynomial 2: ");
    display(poly2);

    sum = addPoly(poly1, poly2);

    printf("Sum = ");
    display(sum);

    return 0;
}
