#include <stdio.h>
#include <stdlib.h>

#define SEC_IN_HOUR 3600
#define SEC_IN_MIN 60

int main()
{
    int seconds, hours, minutes;
    printf("Enter any amount of second you want to convert: ");
    scanf("%d", &seconds);
    hours = seconds / SEC_IN_HOUR;
    seconds = seconds % SEC_IN_HOUR;
    minutes = seconds / SEC_IN_MIN;
    seconds = seconds % SEC_IN_MIN;
    printf("%d hours %d minutes %d seconds", hours, minutes, seconds);
    return 0;
}
