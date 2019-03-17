#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_1, number_2;
    printf("Enter two integer numbers: ");
    scanf("%d%d", &number_1,&number_2);
    number_1 = number_1 + number_2;
    number_2 = number_1 - number_2;
    number_1 = number_1 - number_2;
    printf("When the numbers are interchanged a is %d and b is %d", number_1, number_2);
    return 0;
}
