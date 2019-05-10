#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])

{
    if (argc == 2) //if an input is entered after command line
        for (int i = 1; i < argc; i++)
// for every word while skipping the first word, keeping it less than 2 words .. iterate over each word
        {
            for (int j = 0, n = strlen(argv[i]); j < n; j++)
// starting at the 0th character in the string, where the character is less than the length of the string, iterate over each letter
            {
                if (isdigit(argv[i][j]) == false)
                {
                    printf("Usage: %s key\n", argv[0]);
                    return 1;
                }
            }
            int converted = atoi(argv[1]);
            string plaintext = get_string("plaintext: ");
            printf("ciphertext: ");
            if (strlen(plaintext) > 1)
//if an input is entered after command line
                for (int c = 0; c < strlen(plaintext); c++)
// for every word, keeping it less than the number of input words .. iterate over each word
                {
                    int text = (plaintext[c]);
                    char cipher = text + converted;
                    if ((cipher > 65 && cipher < 91) || (cipher > 97 && cipher < 123))
// if code fits in the ascii table
                    {
                        printf("%c", cipher);
                    }
                    else if (isupper(text))
                    {
                        printf("%c", (((cipher - 65) % 26) + 65));
                    }
                    else
                    {
                        printf("%c", (((cipher - 97) % 26) + 97));
                    }

                }
            printf("\n");
        }
    else
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }
}
