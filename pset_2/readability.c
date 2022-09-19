#include <cs50.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);

int main(void)
{
    // Getting user input
    string text = get_string("Text: ");
    int results = count_letters(text);
    printf("%i letters\n", results);
}


// Counts number of letters in a string
int count_letters(string text)
{
    int count = 0;
    string s = text;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Omits spaces
        if(s[i] != ' ')
        {
          count++;
        }
    }
    return count;
}
