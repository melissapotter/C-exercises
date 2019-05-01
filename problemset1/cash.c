#include <cs50.h>
#include <math.h>
#include <stdio.h>

float get_positive_int(string prompt);
int main(void)
{
    float i = get_positive_int("Change owed: ");

    int cents = round(i * 100); //rounding to whole number
    int quarters = cents / 25; //how many quarters wil fit in cents?
    int dimes = (cents % 25) / 10; //remainder from quarters divided by 10 cents
    int nickles = (cents - (dimes * 10) - (quarters * 25)) / 5;  //remainder from dimes and quarters divded by 5 cents
    int pennies = (cents - (dimes * 10) - (quarters * 25) - (nickles * 5)) / 1;  // remainder from all divded by 1 cent
    int coins = (quarters + dimes + nickles + pennies);
    printf("%i \n", coins);
}

float get_positive_int(string prompt)
{
    float n;
    do
    {
        n = get_float("%s", prompt);
    }
    while (n < 0);
    return n; //redisplay question if it doesn't meet requirements
}