#include <stdio.h>

int main ()

{
    int number1, number2;
    int num = 0;
    printf("Enter 2 numbers to multiply\nNumber 1: ");
    scanf("%d", &number1);
    printf("Number 2: ");
    scanf("%d", &number2);
    for (int i = 0; i < number2; i++)
    {
    	num = number1 + num;
    }
    printf("%d x %d = %d\n", number1, number2, num);
    return 0;
    
}
