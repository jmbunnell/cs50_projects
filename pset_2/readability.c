#include <cs50.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Getting user input
    string text = get_string("Text: ");
    int results = count_letters(text);
    printf("%i letters\n", results);
    int wordCount = count_words(text);
    printf("%i words\n", wordCount);
    int sentCount = count_sentences(text);
    printf("%i sentences\n", sentCount);
}


// Counts number of letters in a string
int count_letters(string text)
{
    int count = 0;
    string s = text;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if ( (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') )
        {
            count++;
        }
    }
    return count;
}

// Counts number of words in a string
int count_words(string text)
{
    int count = 0;
    string s = text;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == 32)
        {
            count++;
        }
    }
    if (count >= 0)
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}

// Counts number of sentences in a string
int count_sentences(string text)
{
    int count = 0;
    string s = text;
    // Loops thru string
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Checks if character is period, question mark or exclamation
        if (s[i] == 33 || s[i] == 46 || s[i] == 63)
        {
            count ++;
        }
    }
    return count;
}

