#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fib_array[30];
    fib_array[0] = 1;
    fib_array[1] = 1;
    int iterator;
    for(iterator=2;iterator<30;iterator++)
    {
        fib_array[iterator] = fib_array[iterator-1] + fib_array[iterator-2];
    }
    for(iterator=0;iterator<30;iterator++)
    {
        printf("%d, ", fib_array[iterator]);
    }
    return 0;
}
