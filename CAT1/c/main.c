#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mileage_start, mileage_stop, fuel_level_start, fuel_level_end, fuel_used, distance_traveled, rate;
    printf("Enter your mileage at start: ");
    scanf("%f", &mileage_start);
    printf("Enter your mileage at the end: ");
    scanf("%f", &mileage_stop);
    printf("Enter your fuel level at start: ");
    scanf("%f", &fuel_level_start);
    printf("Enter your fuel level at the end: ");
    scanf("%f", &fuel_level_end);
    fuel_used = fuel_level_start - fuel_level_end;
    distance_traveled = mileage_stop - mileage_start;
    rate = (distance_traveled/fuel_used);
    printf("Your used fuel is : %.4f litres\nYour distance traveled is : %.4f km\nYour fuel in kilometres per litre of fuel used is : %.4f\n", fuel_used, distance_traveled, rate);
    return 0;
}
