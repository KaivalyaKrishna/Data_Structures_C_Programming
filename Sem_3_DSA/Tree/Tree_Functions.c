#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createTree() {
    int value;
    printf("Enter value (-1 for no node): ");
    scanf("%d", &value);

    if (value == -1)
        return NULL;

    struct Node *node = malloc(sizeof(struct Node));
    node->data = value;

    printf("Enter left child of %d\n", value);
    node->left = createTree();

    printf("Enter right child of %d\n", value);
    node->right = createTree();

    return node;
}

int height(struct Node *root) {
    if (root == NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    return (left > right ? left : right) + 1;
}

int countNodes(struct Node *root) {
    if (root == NULL)
        return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

int countLeafNodes(struct Node *root) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int countTwoChildNodes(struct Node *root) {
    if (root == NULL)
        return 0;

    int count = 0;
    if (root->left != NULL && root->right != NULL)
        count = 1;

    return count + countTwoChildNodes(root->left) + countTwoChildNodes(root->right);
}

int main() {
    printf("Create Binary Tree\n");
    struct Node *root = createTree();

    printf("\nHeight of the tree: %d\n", height(root));
    printf("Total number of nodes: %d\n", countNodes(root));
    printf("Number of leaf nodes: %d\n", countLeafNodes(root));
    printf("Number of nodes with two children: %d\n", countTwoChildNodes(root));

    return 0;
}
