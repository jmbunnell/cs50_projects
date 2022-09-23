#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Function prototypes
bool only_digits(string s);
char rotate(char c, int n);

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
    int convert = atoi(argv[1]);
    //printf("convert: %i\n", convert);

    // Prompt user for input - plaintext
    string prompt = get_string("plaintext: ");


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

// For each character in plaintext
char rotate(char c, int n)

    // Rotate character if it's a letter

