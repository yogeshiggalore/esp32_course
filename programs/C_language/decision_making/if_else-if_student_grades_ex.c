/*
    example code to print grades of students
*/
#include <stdio.h>
int main()
{
    int marks = 64;

    if (marks > 85 && marks <= 100)
    {
        printf("Congrats ! you scored grade A ...\n");
    }
    else if (marks > 60 && marks <= 85)
    {
        printf("You scored grade B + ...\n");
    }
    else if (marks > 40 && marks <= 60)
    {
        printf("You scored grade B ...\n");
    }
    else if (marks > 30 && marks <= 40)
    {
        printf("You scored grade C ...\n");
    }
    else
    {
        printf("Sorry you are fail ...\n");
    }

    printf( "code ends here\n");

    return 0;
}