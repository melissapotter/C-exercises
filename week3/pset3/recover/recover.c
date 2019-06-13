#include <stdio.h>
#include <stdlib.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    int x = 0xea;
    if ((x >= 0xe0) && (x <= 0xef))
    {
        printf("True, The number is within the range 0xe0 and 0xef\n");
    }
    else
    {
        printf("the state statement is outside the range\n");

    }
}
