#include <stdio.h>
#include <stdlib.h>

int main()
{
    int my_array[30];
    for(int iterator=0;iterator<30;iterator++)
    {
        my_array[iterator] = 40;
    }
    printf("%d", my_array[28]);
    return 0;
}
