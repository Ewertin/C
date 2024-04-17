#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node* insertAtBeginning(Node *head, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        exit(1);
    }
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

int main()
{
    Node *head = NULL;

    head = insertAtBeginning(head, 3);
    head = insertAtBeginning(head, 2);
    head = insertAtBeginning(head, 1);

    while (head != NULL)
    {
        printf("%d\n", head->data);
        Node *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}