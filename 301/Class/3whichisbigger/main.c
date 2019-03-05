#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer_1, integer_2;
    printf("Enter two integer numbers separated by enter: ");
    scanf("%d%d", &integer_1, &integer_2);
    if (integer_1 > integer_2)
    {
        printf("%d is greater than %d", integer_1, integer_2);
    }
    else
    {
        printf("%d is greater than %d", integer_2, integer_1);
    }
    return 0;
}
