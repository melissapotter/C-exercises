#include <stdio.h>
#include <stdlib.h>

//minichallenge create the NODE for a binary tree.
typedef struct NODE
{
    int value;
    struct NODE *low;
    struct NODE *high;
} NODE;

NODE *rootNode;

void addNode(int value)
{
    NODE *newNode = malloc(sizeof(NODE));
    newNode->value = value;
    newNode->high = NULL;
    newNode->low = NULL;

    if (rootNode == NULL)
    {
        rootNode = newNode;
        return;
    }
}

int main(void)
{
    printf("hello\n");
    addNode(10);
    addNode(8);
    addNode(15);
}