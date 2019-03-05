#include <stdio.h>
#include <stdlib.h>

int input();
char getGrade(int mark);
void output(char grade);

int main()
{
    int marks;
    char grade;
    marks = input();
    if ((marks > 100) || (marks < 0))
    {
        printf("You entered an incorrect value\n");
        return 0;
    }
    grade = getGrade(marks);
    output(grade);
    return 0;
}

int input()
{
    int marks;
    printf("Enter the average marks you scored(0-100): ");
    scanf("%d", &marks);
    return marks;
}

char getGrade(int mark)
{
    char grade;
    if ((mark<100) && (mark>=75))
    {
        grade = 'A';
    }
    else if ((mark<75) && (mark>=60))
    {
        grade = 'B';
    }
    else if ((mark<60) && (mark>=50))
    {
        grade = 'C';
    }
    else if ((mark<50) && (mark>=40))
    {
        grade = 'D';
    }
    else if ((mark<40) && (mark>=0))
    {
        grade = 'E';
    }
    return grade;
}

void output(char grade)
{
    printf("You had an average of grade %c", grade);
}
