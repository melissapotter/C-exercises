#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int shift(char c);
int main(int argc, string argv[])
{
    if (argc >= 1) //if an input is entered after command line
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0, n = strlen(argv[i]); j < n; j++)
            {
                if (isalpha(argv[i][j]) == false)
                {
                    printf("Usage: %s key\n", argv[0]);
                    return 1;
                }
            }
            string plaintext = get_string("plaintext: ");
            char ciphertext;
            printf("ciphertext: ");
            int keylength = strlen(argv[1]);
            if (strlen(plaintext) > 0)
//if an input is entered after command line
                for (int c = 0; c < strlen(plaintext); c++)

// for every word, keeping it less than the number of input letters .. iterate over each letter
                {
                    int jackpot = c % keylength;
                    if (isupper(plaintext[c]))
                    {
                        ciphertext = ((((plaintext[c] + (shift(argv[1][jackpot])) - 65) % 26) + 65));
                    }
                    if (islower(plaintext[c]))
                    {
                        ciphertext = ((((plaintext[c] + (shift(argv[1][jackpot])) - 97) % 26) + 97));
                    }
                    else if (isalpha(plaintext[c])) == false)
                    {
                        ciphertext = (plaintext[c]);
                    }
                    printf("%c", ciphertext);

                }
            printf("\n");
        }
    else
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }
}

int shift(char c)
//taking input char c and outputting how many numbers to shift by
{
    if isupper(c)
    {
        int less = c - 65;
        return less;
    }
    else
    {
        int smaller = c - 97;
        return smaller;
    }
}
