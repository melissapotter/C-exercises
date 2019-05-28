#include <cs50.h>
#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}

int modifyAdder(int* x, int y)
{
    *x +=7;
    return *x + y;
}

int main(void)
{
    int a = 5;
    int b = 13;
    printf("The total is %i\n", add(a, b));
    printf("The modified total is %i\n", modifyAdder(&a, b));
    // * is go to the address and modify value , & is give me address of this value
    printf("The total is %i\n", add(a, b));

    // int* intPointer = &b;
    // printf("b is %i\n", b);
    // *intPointer += 4; // adding 4 to the address, not the value
    // printf("now b is %i\n", b);
}