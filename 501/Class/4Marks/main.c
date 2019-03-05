#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10];
    for(int iterator=0;iterator<10;iterator++)
    {
        printf("\nEnter the %d number: ",iterator+1);
        scanf("%d", &numbers[iterator]);
    }
    for(int iterator=0;iterator<10;iterator++)
    {
        printf("%d : %d\n", iterator+1, numbers[iterator]);
    }
    //printf("Hello world!\n");
    return 0;
}
