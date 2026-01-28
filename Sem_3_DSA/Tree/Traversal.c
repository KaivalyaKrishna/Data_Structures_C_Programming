#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int value) {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void inorder(struct Node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct Node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    int choice;

    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    while (1) {
        printf("\nChoose traversal type\n");
        printf("1. Inorder\n");
        printf("2. Preorder\n");
        printf("3. Postorder\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Inorder Traversal: ");
                inorder(root);
                printf("\n");
                break;

            case 2:
                printf("Preorder Traversal: ");
                preorder(root);
                printf("\n");
                break;

            case 3:
                printf("Postorder Traversal: ");
                postorder(root);
                printf("\n");
                break;

            case 4:
                printf("Program Ended\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
