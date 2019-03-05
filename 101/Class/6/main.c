#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius, volume, surface_area;
    const float PI = 3.142;

    printf("Enter radius of a sphere: ");
    scanf("%f", &radius);

    volume = ((4 * PI * radius * radius * radius)/3);
    printf("Volume of the sphere is %f\n", volume);

    surface_area = ((4*PI*radius*radius));
    printf("Surface area of the sphere is %f\n", surface_area);

    return 0;
}
