#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, a = 3, b = 4;
    x = sqrt(a+pow(b,2));
    printf("%f\n", x);
    return 0;
}
//Try using without math.h
