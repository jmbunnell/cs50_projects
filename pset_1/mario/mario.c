#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Variable 
    int prompt;

    //Input has to be integer 1-8
    do
    {
        prompt = get_int("Height: ");
    }
    while (prompt <= 0 || prompt >= 9);

    //Print integer store in variable
    printf("Stored: %i\n", prompt);
}