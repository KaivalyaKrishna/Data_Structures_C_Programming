#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head, int data);
void insertAtEnd(struct Node** head, int data);
void insertAtPosition(struct Node** head, int data, int position);
void deleteAtBeginning(struct Node** head);
void deleteAtEnd(struct Node** head);
void deleteAtPosition(struct Node** head, int position);
void search(struct Node* head, int key);
void reverse(struct Node** head);
void display(struct Node* head);

int main() {
    struct Node* head = NULL;
    int choice, data, position, key;

    while (1) {
        printf("\n===== Singly Linked List Operations =====\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete at Beginning\n");
        printf("5. Delete at End\n");
        printf("6. Delete at Position\n");
        printf("7. Search Element\n");
        printf("8. Reverse List\n");
        printf("9. Display List\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;

            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;

            case 3:
                printf("Enter data and position: ");
                scanf("%d %d", &data, &position);
                insertAtPosition(&head, data, position);
                break;

            case 4:
                deleteAtBeginning(&head);
                break;

            case 5:
                deleteAtEnd(&head);
                break;

            case 6:
                printf("Enter position: ");
                scanf("%d", &position);
                deleteAtPosition(&head, position);
                break;

            case 7:
                printf("Enter element to search: ");
                scanf("%d", &key);
                search(head, key);
                break;

            case 8:
                reverse(&head);
                printf("List reversed successfully.\n");
                break;

            case 9:
                display(head);
                break;

            case 10:
                exit(0);

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
    printf("Inserted %d at the beginning.\n", data);
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        printf("Inserted %d as the first node.\n", data);
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    printf("Inserted %d at the end.\n", data);
}

void insertAtPosition(struct Node** head, int data, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        printf("Inserted %d at position %d.\n", data, position);
        return;
    }

    struct Node* temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Position out of range!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    printf("Inserted %d at position %d.\n", data, position);
}

void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;
    printf("Deleted element: %d\n", temp->data);
    free(temp);
}

void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = *head;

    if (temp->next == NULL) {
        printf("Deleted element: %d\n", temp->data);
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->next->next != NULL)
        temp = temp->next;

    printf("Deleted element: %d\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

void deleteAtPosition(struct Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = *head;

    if (position == 1) {
        *head = temp->next;
        printf("Deleted element: %d\n", temp->data);
        free(temp);
        return;
    }

    struct Node* prev = NULL;
    for (int i = 1; i < position && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }

    prev->next = temp->next;
    printf("Deleted element: %d\n", temp->data);
    free(temp);
}

void search(struct Node* head, int key) {
    int position = 1;

    while (head != NULL) {
        if (head->data == key) {
            printf("Element %d found at position %d.\n", key, position);
            return;
        }
        head = head->next;
        position++;
    }

    printf("Element %d not found in the list.\n", key);
}

void reverse(struct Node** head) {
    struct Node *prev = NULL, *current = *head, *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("Linked List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
