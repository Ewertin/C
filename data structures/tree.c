#include <stdio.h>//.
#include <stdlib.h>

typedef struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
} tree;

tree* createNode(int data)
{
    tree *newNode = (tree *)malloc(sizeof(tree));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void freeTree(tree *node)
{
    if(node != NULL)
    {
        printf("%d\n",node->data);
        freeTree(node->left);
        freeTree(node->right);
        free(node);
    }
}

int main()
{
    tree *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    
    freeTree(root);
    return 0;
}