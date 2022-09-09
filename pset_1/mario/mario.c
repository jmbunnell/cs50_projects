#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Variable created
    int prompt;

    //Input has to be integer 1-8
    do
    {
        prompt = get_int("Height: ");
    }
    while (prompt <= 0 || prompt >= 9);

    //Takes input and prints # incrementally if less than 9
    for (int i = 1; i <= prompt; i++)
    {
        for (int j = i; j < prompt; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
