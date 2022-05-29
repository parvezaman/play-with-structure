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
    today.day = 29;

    printf("%d - %d - %d", today.day, today.month, today.year);
    return 0;
}