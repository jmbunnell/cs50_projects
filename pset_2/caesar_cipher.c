#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Function prototypes
bool only_digits(string s);

int main(int argc, string argv[])
{
    // Make sure program contains command line argument
    int confirm = argc;
    if (confirm != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Make sure every character in argument is an digit
    bool check = only_digits(argv[1]);
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Prompt user for input - plaintext
    string plaintext = get_string("plaintext: ");

    // Convert argument from string to an integer
    int convert = atoi(argv[1]);
    printf("ciphertext: ");

    // Obtain ciphertext
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 65) + convert) % 26) + 65);
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 97) + convert) % 26) + 97);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}

// Checks characters in argument provided
bool only_digits(string s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isdigit(s[i]))
        {
            return true;
        }
    }
    return false;
}


