#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, value;
    printf("Enter 2 numbers you want to check the greatest: ");
    scanf("%d %d", &num1, &num2);
    value = ((num1>num2)?1:0);
    if (value == 1)
        printf("%d is greater\n", num1);
    else
        printf("%d is greater\n", num2);
    return 0;
}
