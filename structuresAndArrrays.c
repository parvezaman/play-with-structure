#include <stdio.h>
#include <string.h>
struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char *name[100];
    int class;
    int roll;
    struct Date dob;
};

void printStudent(struct Student st)
{
    printf("name = %s\nclass = %d\nroll = %d\n", st.name, st.class, st.roll);
    printf("DOB: ");
    printDob(st.dob);
}

void printDob(struct Date day)
{
    printf("%d - %d - %d", day.day, day.month, day.year);
}

int main()
{
    struct Student st1 = {
        .class = 9,
        .roll = 10,
        .dob = {1, 5, 2012}};
    char name[] = "Amanullah parvez";
    strcpy(st1.name, name);
    printStudent(st1);
    return 0;
}