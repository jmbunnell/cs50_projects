#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Getting user input
    string text = get_string("Text: ");

    // Total letters, words & sentences
    float letters = count_letters(text);
    float wordCount = count_words(text);
    float sentCount = count_sentences(text);

    // Averaged letters & sentences per 100 words
    float l = letters / wordCount * 100;
    float s = ((sentCount / wordCount) * 100);

    // Calculates reading-grade level
    float index = ((0.0588 * l) - (0.296 * s)) - 15.8;
    int indexFloor = round(index);

    // Checks index and prints appropiate grade level
    if (indexFloor < 0)
    {
        printf("Before Grade 1\n");
    }
    else if (indexFloor > 0 && indexFloor <= 16)
    {
        printf("Grade %i\n", indexFloor);
    }
    else
    {
        printf("Grade 16+\n");
    }

}


// Counts number of letters in a string
int count_letters(string text)
{
    int count = 0;
    string s = text;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
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




