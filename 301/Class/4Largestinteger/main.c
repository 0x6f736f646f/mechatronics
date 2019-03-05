#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer_1, integer_2, integer_3;
    printf("Enter three integer numbers separated by enter: ");
    scanf("%d%d%d", &integer_1, &integer_2, &integer_3);
    if (integer_1>integer_2)
        if(integer_1>integer_3)
            printf("%d is greater than %d and %d", integer_1, integer_2, integer_3);
    if (integer_2 > integer_1)
        if(integer_2>integer_3)
            printf("%d is greater than %d and %d", integer_2, integer_3, integer_1);
    else
        printf("%d is greater than %d and %d", integer_3, integer_2, integer_1);
    return 0;
}
