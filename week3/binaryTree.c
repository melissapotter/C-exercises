#include <stdio.h>
#include <stdlib.h>

//minichallenge create the NODE for a binary tree.

#define true 1
#define false 0

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

    // if value of new node is less than the root node attach to low
    // else add to high
    NODE *trav = rootNode;
    // printf("trying to add node %i\n", newNode->value);
    while(1)
    {
        if (newNode->value < trav->value)
        {
            if(trav->low == NULL)
            {
                // printf("found empty spot\n");
                trav->low = newNode;
                return;
            }
            // printf("found a low node valued: %i moving to it\n", trav->low->value);
            trav = trav->low;
            continue; // restarts while loop
        }
        else
        {
            if(trav->high == NULL)
            {
                // printf("found empty spot\n");
                trav->high = newNode;
                return;
            }
            // printf("found a high node valued: %i moving to it\n", trav->high->value);
            trav = trav->high;
            continue;
        }
    }
}

void displayTreeOnEnter(NODE *curNode)
{
    // printf("%i, ", curNode->value);

    if(curNode->low)
    {
       displayTreeOnEnter(curNode->low);
    }
    if (curNode->high)
    {
    displayTreeOnEnter(curNode->high);
    }
}

void displayTreeOnDeparture(NODE *curNode)
{

    if(curNode->low)
    {
       displayTreeOnDeparture(curNode->low);
    }

    if (curNode->high)
    {
    displayTreeOnDeparture(curNode->high);
    }
    printf("%i, ", curNode->value);

    // 4 7 6 5 9 8 13 18 20 17 15 10
}

int doesContain(int value)
{
    //search the tree
    // return 0 if value is not in the tree
    // return 1 if value does not exist in the tree
    if (rootNode->value == value)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    printf("hello\n");
    addNode(10);
    addNode(8);
    addNode(15);
    addNode(17);
    addNode(20);
    addNode(18);
    addNode(5);
    addNode(6);
    addNode(9);
    addNode(4);
    addNode(13);
    addNode(7);

    displayTreeOnEnter(rootNode);
    displayTreeOnDeparture(rootNode);
    printf("\n");
}