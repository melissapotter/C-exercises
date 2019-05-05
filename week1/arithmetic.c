#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void) // every c file needs this, this is a function.
{
    // string firstname = get_string("What is your first name? ");
    // string lastname = get_string("What is your last name? ");
    // // create variables by stating data type instead of using var
    // //printf is like console log
    // printf("Hello Mr/Ms %s, %s!\n", lastname, firstname);
    //escape is \ , in order to show \, add another
// %s is for a placeholder, called on name to display variable

    // int myNum = 36;
    float myFloat = round(3.87 * 100);
    float other = round(1.52* 100);
    int total = myFloat + other;
    int cents = total % 100;
    int dollars = total / 100;
    printf("adding the numbers: $%i.%i\n", dollars, cents);

    float division = 78.0/15.0;
    // or do (float)78/(float)15;
    printf("the division: %.1f\n", division);
}

// clang hello.c -o hello
// changes output instead of a.out