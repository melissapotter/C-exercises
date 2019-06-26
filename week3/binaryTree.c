#include <assert.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct NODE
{
    int value;
    struct NODE *low;
    struct NODE *high;
} NODE;

typedef struct QNODE
{
    NODE *node;
    struct QNODE *next;
} QNODE;

NODE *rootNode;
QNODE *headNode;

// functiomn declarations
NODE* pop();
void push(NODE*);

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

    // if value of new node is less the root node attach to low
    // else add to high.
    NODE *trav = rootNode;
    // printf("trying to add node %i\n", newNode->value);
    while(1)
    {
        if (newNode->value < trav->value)
        {
            if (trav->low == NULL)
            {
                // printf("found empty spot\n");
                trav->low = newNode;
                return;
            }
            // printf("found a low node valued: %i moving to it\n", trav->low->value);
            trav = trav->low;
            continue;
        }
        else
        {
            if (trav->high == NULL)
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
    printf("%i ", curNode->value);

    if (curNode->low)
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
    //4 7 6 5 9 8 13 18 20 17 15 10

    if (curNode->low)
    {
        displayTreeOnEnter(curNode->low);
    }

    if (curNode->high)
    {
        displayTreeOnEnter(curNode->high);
    }

    printf("%i ", curNode->value);
}

int doesContain(int value)
{
    NODE *trav = rootNode;
    while(1)
    {
        if(trav->value == value)
        {
            return 1;
        }
        if (value < trav->value)
        {
            if (trav->low == NULL)
            {
                return 0;
            }
            trav = trav->low;
            continue;
        }
        if (value > trav->value)
        {
            if ( trav->high == NULL)
            {
                return 0;
            }
            trav = trav->high;
            continue;
        }
    }
}

void freeTree(NODE *curNode) {
    if (curNode->low)
    {
        freeTree(curNode->low);
    }

    if (curNode->high)
    {
        freeTree(curNode->high);
    }

    free(curNode);
}

void populateTree()
{
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
}

void tests()
{
    populateTree();
    assert(doesContain(10) && "Tree Contains the number 10");
    assert(doesContain(8) && "Tree contains the number 8");
    assert(doesContain(15) && "Tree contains the number 15");
    assert(doesContain(5) && "Tree contains the number 5");
    assert(!doesContain(3) && "Tree does not contain 3");
    assert(doesContain(17) && "Tree does contain the number 17");
    assert(!doesContain(21) && "Tree does no contain 21");
    assert(doesContain(13) && "tree does contain the number 13");
    assert(doesContain(9) && "tree does contain the number 9");
    assert(!doesContain(16) && "tree does not contain the number 16");
}

int main(void)
{
    printf("hello\n");
    populateTree();

    displayTreeOnEnter(rootNode);
    printf("\n");

    push(rootNode);
    push(rootNode->low);
    push(rootNode->high);
    printf("%i\n", pop()->value);
    printf("%i\n", pop()->value);
    freeTree(rootNode);

    // tests();
    // printf("%i\t%i\n", rootNode->low->value, rootNode->high->value);
    //adding to binary tree, create queue node

}

void push (NODE* address)
{
    QNODE *newQNode = malloc(sizeof(QNODE));
    newQNode->node = address;
    newQNode->next = NULL;
    if (headNode == NULL)
    {
        headNode = newQNode;
        return;
    }
    QNODE *trav = headNode;
    while(trav->next != NULL)
    {
        trav = trav->next;
    }

    trav->next = newQNode;
}

NODE* pop()
{
    // temp store the headNode
    // reassign the headNode
    //return the address of headNode

    NODE *temp = headNode->node;
    QNODE *qTemp = headNode;
    headNode = qTemp->next;
    free(qTemp);
    return temp;
}