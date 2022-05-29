#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
    // initialize the struct
    struct Date start;
    int howManyDays;
    // assign struct components into single variable
    int startDay = start.day;
    int startMonth = start.month;
    int startYear = start.year;

    // take input date in the struct
    printf("Input the start days: ");
    scanf("%d %d %d", &start.day, &start.month, &start.year); // dont put single variable while scaning because you are putting the values into the structure variable address not the third variable address

    printf("How many days do you want to print: ");
    scanf("%d", &howManyDays);
    // initialize another structure
    struct Date nextDate = start;

    for (int i = 0; i < howManyDays; i++)
    {
        /* // check leap year
        if (((nextDate.year % 4 == 0) && !(nextDate.year % 100 == 0)) || nextDate.year % 400 == 0)
        {
            daysInMonth[1] = 29;
        } */

        if (nextDate.day != daysInMonth[nextDate.month - 1])
        {
            nextDate.day++;
        }
        else if (nextDate.month < 12)
        {
            nextDate.day = 1;
            nextDate.month++;
        }
        else
        {
            nextDate.day = 1;
            nextDate.month = 1;
            nextDate.year++;
        }

        // print the output
        printf("Next date %d-> %d - %d - %d\n", i + 1, nextDate.day, nextDate.month, nextDate.year);
    }
    return 0;
}

/*
for example,
you want to print all or next 100 dates after a given date. How do you do that?
 */