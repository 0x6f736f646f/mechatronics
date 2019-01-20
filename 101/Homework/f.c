#include <stdio.h>

int main ()

{
	int number;
    int counter = 0;
    printf("Enter a number you want to find if its a prime number: ");
    scanf("%d", &number);
    for (int i = 2; i < number; i++)
    {
        if (number%i==0)
        {
            //
            counter ++;
        }
    }
    if ((counter != 0) && (number!=1 || number!=2))
    {
        printf("%d is not a prime number\n", number);
    }
    else
    {
        printf("%d is a prime number\n", number);
    }
    
    return 0;
    
}
