#include <stdio.h>
#include <stdlib.h>

int squared (int variable);
int cubed (int variable);

int main()
{
    int iterator;
    for(iterator=5;iterator<=100;iterator++)
    {
        if(iterator % 7 == 0)
        {
            printf("%d is a multiple of 7 and its square is %d and its cubed is %d\n", iterator, squared(iterator), cubed(iterator));
        }
    }
    return 0;
}

int squared (int variable)
{
    return (variable * variable);
}
int cubed (int variable)
{
    return (variable * variable * variable);
}
