#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first_num, iterator = 0, number, minimum_num, maximum_num;
    float average, sum = 0;
    printf("Enter a +ve integer: ");
    scanf("%d", &first_num);
    if (first_num <= 0)
    {
        printf("No positive number entered\n");
        return 0;
    }
    maximum_num = first_num;
    minimum_num = first_num;
    sum = sum + first_num;
    do
    {
        iterator++;
        printf("Enter next +ve integer: ");
        scanf("%d", &number);
        if (number <= 0)
            continue;
        if (number >= maximum_num)
            maximum_num = number;
        else
            minimum_num = number;
        sum = sum + number;
    }while(number > 0);
    average = (sum/iterator);
    printf("Number of +ve values entered is %d\nMaximum value entered is %d\nMinimum value entered is %d\nAverage value is %f\n", iterator, maximum_num, minimum_num, average);
    return 0;
}
