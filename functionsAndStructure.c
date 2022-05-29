#include <stdio.h>
#include <stdbool.h>
struct Date
{
    int day;
    int month;
    int year;
};

// a function that returns  the month of the given date
int getMonth(struct Date date) // here "struct Date" is the type
{
    return date.month;
}

// a function to check if the given date is the first day of the year
bool isFirstDay(struct Date date)
{
    return date.day == 1 && date.month == 1;
}

// a function that will give you the first date of a given year
struct Date getFirstDay(int year)
{
    struct Date ans = {1, 1, year};
    return ans;
};

int main()
{
    struct Date date = {2, 1, 2022};
    // struct Date date = getFirstDay(2022);
    printf("%d\n", getMonth(date));

    if (isFirstDay(date))
    {
        printf("this is the first day");
    }

    return 0;
}