//Program to calculate the product of two numbers
#include <stdio.h>
#include <stdlib.h>

//#define PI 3.142

float radius, circum, Area;

float circumference (float x);
float area (float x);

const float PI = 3.142;

int main()
{
    //input the first number
    printf("Enter radius of circle : ");
    scanf("%f", &radius);

    //calculate and display the product
    circum = circumference(radius);
    printf("Circumference = 3.142 X %f X 2 = %f\n", radius,circum);

    Area = area(radius);
    printf("Area = 3.142 X %f X %f = %f\n", radius, radius,Area);

    return 0;
}
//Function returns the product of its two arguments
float circumference(float x)
{
    return (2 * PI * x);
}
float area(float x)
{
    return (PI * x * x);
}
