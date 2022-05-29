#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};

int main()
{
    // declaration / assignning of structure value
    /*
        struct Date today;
        today.day = 28;
        today.month = 5;
        today.year = 2022;
     */
    // another way of declaration / assignning of structure value
    struct Date today = {28, 5, 2022};

    // updating a structure value
    // today.day = 29;

    // update all variables
    today = (struct Date){30, 05, 2022};

    // assigning into another variable to be comfortable while using variables
    int todayDay = today.day;
    int todayMonth = today.month;
    int todayYear = today.year;

    // update value using short variables
    todayDay = 29;

    printf("%d - %d - %d", todayDay, todayMonth, todayYear);
    return 0;
}