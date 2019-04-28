#include <stdio.h>
// includes get_string
#include <cs50.h>
int main(void)
{
    string name = get_string("What is your name?\n");
//     printing variable name after entered
    printf("hello, %s\n", name);
}