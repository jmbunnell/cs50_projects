#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Prototypes
bool only_digits(string s);

int main(int argc, string argv[])
{

    // Make sure program contains command line argument
    int n = argc;
    if (n <= 1 || n > 2)
    {
        printf("Usage: ./caesar key\n");
    }
    // Make sure every character in argument is an digit
    bool y = only_digits(argv[1]);
    if (y == false)
    {
        printf("Usage: ./caesar key\n");
    }

    // Convert argument from string to an integer

    // Prompt user for input - plaintext

    // For each character in plaintext

        // Rotate character if it's a letter

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

