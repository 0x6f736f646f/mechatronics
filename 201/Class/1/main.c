#include <stdio.h>
#include <stdlib.h>

#define upper_limit 1000
#define lower_limit 0

int main()
{
    //variable declaration
    const int interval = 10;
    float farenheit, celcius;
    //variable initialization
    farenheit = upper_limit;
    //printf for formating purposes
    printf("Farenheit\t\tCelcius\n________________________________\n");
    //while loop to loop upto upper limit___________\t\t________\n
    while(farenheit >= lower_limit/*Condition statement*/)
    {
        celcius = ((5 * ( farenheit - 32))/9);
        printf("|\t%.3f\t|\t%.2f\t|\n",farenheit, celcius);
        //printf("____________________\n");
        farenheit = farenheit - interval;
    }
    printf("|_______________________________|\n");
    return 0;
}
