#include <stdio.h>

int main ()

{
	int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Addition\n%d + %d = %d", num1, num2, num1 + num2);
    printf("\nSubtraction\n%d - %d = %d", num1, num2, num1 - num2);
    printf("\nMultiplication\n%d x %d = %d", num1, num2, num1 * num2);
    printf("\nDivision\n%d / %d = %d", num1, num2, num1 / num2);
    printf("\nRemainder after %d id divided by %d = %d", num1, num2, num1 % num2);
    return 0;
    
}
