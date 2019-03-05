#include <stdio.h>
#include <stdlib.h>

int main()
{
    int my_array[20], iterator;
    for(iterator=0;iterator<20;iterator++)
    {
        my_array[iterator] = iterator;
        printf("my_array[%d]\n", my_array[iterator]);
    }
    return 0;
}
