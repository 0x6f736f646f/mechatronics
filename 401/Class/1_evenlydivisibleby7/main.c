#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number you want to check if its evenly divisble by 7: ");
    scanf("%d", &number);
    if (((number % 2) == 0) && ((number % 7) == 0))
    {
        printf("%d is evenly divisible by 7\n", number);
    }
    else
    {
        printf("%d is not evenly divisble by 7\n", number);
    }
    return 0;
}
