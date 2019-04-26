#include <cs50.h>
#include <stdio.h>

int main(void) // every c file needs this, this is a function.
{
    string name = "Meli Mels";// create variables by stating data type instead of using var
    //printf is like console log
    printf("Hello, %s!\n", name); //escape is \ , in order to show \, add another
// %s is for a placeholder, called on name to display variable
}

// clang hello.c -o hello
// changes output instead of a.out