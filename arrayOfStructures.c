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

struct Date inputDate()
{
    struct Date date;
    scanf("%d%d%d", &date.day, &date.month, &date.year);
    return date;
};

struct Student inputStudent()
{
    struct Student st;
    printf("Name: ");
    gets(st.name);
    gets(st.name);
    printf("class: ");
    scanf("%d", &st.class);
    printf("Roll: ");
    scanf("%d", &st.roll);
    printf("input date of birth (dd-mm-yyyy)");
    st.dob = inputDate();

    return st;
}

void printDob(struct Date day)
{
    printf("%d - %d - %d", day.day, day.month, day.year);
}

int main()
{
    int n;
    printf("\nnumber of students: \n");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nInput data for student no %d:\n", i + 1);
        students[i] = inputStudent();
    }

    // print student info
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d info showing:\n", i + 1);
        printStudent(students[i]);
    }

    return 0;
}