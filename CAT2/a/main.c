#include <stdio.h>
#include <stdlib.h>

int find_max(int numbers[], int count);
int find_min(int numbers[], int count);

int main()
{
    int number_array[100], temporary_var, iterator, maximum, minimum, sum = 0;
    float average = 0;
    printf("Enter a +ve integer: ");
    scanf("%d", &number_array[0]);
    if ((number_array[0] == 0) || (number_array[0] < 0))
    {
        printf("Number of +ve values entered is: 0\nMaximum value entered is: 0\nMinimum value entered is: 0\nAverage value is: 0\n");
        return 0;
    }
    for(iterator=1;iterator<100;iterator++)
    {
        printf("Enter next +ve integer: ");
        scanf("%d", &temporary_var);
        if ((temporary_var == 0) || (temporary_var < 0))
        {
            break;
        }
        else
            number_array[iterator] = temporary_var;
            sum = sum + number_array[iterator];
    }
    maximum = find_max(number_array, iterator);
    minimum = find_min(number_array, iterator);
    average = (float) (sum+number_array[0])/iterator;
    printf("Number of +ve values entered is: %d\nMaximum value entered is: %d\nMinimum value entered is: %d\nAverage value is: %f\n", iterator, maximum, minimum, average);
    return 0;
}
int find_max(int numbers[], int count)
{
    int i, maximum_value = 0;
    for(i = 0; i < count; i++)
    {
        if((maximum_value) < (numbers[i]))
        {
            maximum_value = numbers[i];
        }
    }
    return maximum_value;
}
int find_min(int numbers[], int count)
{
    int i, minimum_value = numbers[0];
    for(i = 0; i < count; i++)
    {
        if((minimum_value) >= (numbers[i]))
        {
            minimum_value = numbers[i];
        }
    }
    return minimum_value;
}
