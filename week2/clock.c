#include <cs50.h>
#include <math.h>
#include <stdio.h>

int get_positive_int(string prompt);
int get_time_int(string prompt);

int main(void)
{
    int currentTime = get_time_int("Choose an integer between 1 and 12.\n");
    int addedTime = get_int("How many hours should go by?\n");
    int clockCycle = (addedTime / 12);
    int finalTime = (currentTime + addedTime);
    int finalModTime = (currentTime + (addedTime % currentTime));
     if (finalTime > 12) {
        printf("Requested time: %i o'clock\n", finalModTime);
     }
     else {
        printf("Requested time: %i o'clock\n", finalTime);
     }
    printf("Clock cycles: %i\n", clockCycle);

}
int get_time_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1 || n > 12); // || is to include both requirements for this line
    return n; //redisplay question if it doesn't meet requirements
}

int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1);
    return n;
}