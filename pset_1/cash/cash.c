#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO - done
    int change;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);
    return change;
}

int calculate_quarters(int cents)
{
    // TODO - done
    if (cents >= 75)
    {
        return 3;
    }
    else if (cents >= 50 && cents < 75)
    {
        return 2;
    }
    else if (cents >= 25 && cents < 50)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int calculate_dimes(int cents)
{
    // TODO - done
    if ((cents / 10) == 2)
    {
        return 2;
    }
    else if ((cents / 10) == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int calculate_nickels(int cents)
{
    // TODO
    return 0;
}

int calculate_pennies(int cents)
{
    // TODO
    return 0;
}

