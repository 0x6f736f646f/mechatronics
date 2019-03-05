#include <stdio.h>
#include <stdlib.h>

float mileage_start, mileage_stop, fuel_start, fuel_stop, mileage_dif, fuel_dif, rate_of_fuel_consumption;

int main()
{
    printf("Mileage at the start: ");
    scanf("%f",&mileage_start);

    printf("Mileage at the end: ");
    scanf("%f" ,&mileage_stop);

    printf("Fuel level at the beginning: ");
    scanf("%f" ,&fuel_start);

    printf("Fuel level at the end: ");
    scanf("%f",&fuel_stop);

    mileage_dif = mileage_stop - mileage_start;
    fuel_dif = fuel_start - fuel_stop;
    rate_of_fuel_consumption = mileage_dif / fuel_dif;

    printf("\nMileage covered = %f\n",mileage_dif);
    printf("Fuel consumed = %f\n",fuel_dif);
    printf("Rate of fuel consumption = %f\n",rate_of_fuel_consumption);

    return 0;
}
