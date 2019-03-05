#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mark_1, mark_2, mark_3, average;
    printf("Enter three numbers separated by enter: ");
    scanf("%f%f%f", &mark_1, &mark_2, &mark_3);
    average = ((mark_1 + mark_2 + mark_3)/3);
    if(average >= 50)
    {
        printf("You have passed\nYour average is %f", average);
    }
    else
    {
        printf("You have failed\nYour average is %f", average);
    }
    return 0;
}
