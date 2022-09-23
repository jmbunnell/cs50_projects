#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    return 0;

    // Make sure every character in argument is an digit

    // Convert argument from string to an integer

    // Prompt user for input - plaintext

    // For each character in plaintext

        // Rotate character if it's a letter
}

// Make sure every character in argument is an digit

bool only_digits(string s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 10 || s[i] < 0)
        {
            return 0;
        }
    }
    return true;
}
