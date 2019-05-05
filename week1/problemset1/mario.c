#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);
int main(void)
{
    int height = get_positive_int("What is the requested height of your pyramid?\nPlease choose a positive integer between 1 and 8.\n");
//     printf("Height: %i\n", height);
    for (int i = 0; i < height; i++) // increases the height of pyramid
    {
        for (int j = height - 1; j > i; --j) //increments downward
        {
            printf(" ");
        }
        for (int k = -1; k < i; k++) // adds blocks to each level
        {
            printf("#");
        }
        printf("\n");
    }
}
int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1 || n > 8); // || is to include both requirements for this line
    return n; //redisplay question if it doesn't meet requirements
}

