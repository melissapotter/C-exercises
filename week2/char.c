#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = "Melissa";
    // printf("%c\n", name[2]);
    // for (int i = 0; i < strlen(name); i++)
    // {
    //       printf("%c\n", name[i]);
    // }
    for (int letter = 0, length = strlen(name); letter < length; letter ++)
    {
    // printf("letter:\t%i\tlength:\t%i\n", letter, length);
        printf("%c", name[letter]);
    }
    printf("\n");
}

// %d is for digit or double which is a number or ASCII value
// %c character (it will print the actual letter)

//write the code to print out each character of your name on a diff line