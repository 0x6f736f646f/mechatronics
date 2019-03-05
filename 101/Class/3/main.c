//Program to calculate the product of two numbers
#include <stdio.h>
#include <stdlib.h>

int a, b, c, d;

int product (int x, int y);
int summation (int x, int y);

int main()
{
    //input the first number
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &a);

    //input the first number
    printf("Enter another number between 1 and 100: ");
    scanf("%d", &b);

    //calculate and display the product
    c = product(a,b);
    printf("%d times %d = %d\n", a, b, c);

    d = summation(a,b);
    printf("%d + %d = %d\n", a, b, d);
    return 0;
}
//Function returns the product of its two arguments
int product(int x, int y)
{
    return (x*y);
}
int summation(int x, int y)
{
    return (x + y);
}
