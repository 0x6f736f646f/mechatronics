#include <stdio.h>

int main ()

{
	int number1, number2;
    printf("Enter 2 numbers to test equality\nNumber 1: ");
    scanf("%d", &number1);
    printf("Number 2: ");
    scanf("%d", &number2);
    if (number1<number2)
    {
    	printf("%d is less than %d\n", number1, number2);
    }
    else if (number1>number2)
    {
    	printf("%d is greater than %d\n", number1, number2);
    }
    else if (number1==number2)
    {
    	printf("%d is equal to %d\n", number1, number2);
    }
    else if (number1!=number2)
    {
    	printf("%d is not equal to %d\n", number1, number2);
    }
    return 0;
    
}
