#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
int main()
{
    // initialize the struct
    struct Date start;
    // take input date in the struct
    scanf("%d %d %d", &start.day, &start.month, &start.year);

    return 0;
}

/*
for example,
you want to print all or next 100 dates after a given date. How do you do that?
 */