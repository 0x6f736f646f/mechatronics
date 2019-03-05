#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float first_x, first_y, second_x, second_y, mid_x, mid_y, distance;
    printf("Enter coordinates of points A: ");
    scanf("%f %f", &first_x, &first_y);
    printf("Enter coordinates of points B: ");
    scanf("%f %f", &second_x, &second_y);
    distance = sqrt(pow((second_x-first_x), 2)+pow((second_y-first_y), 2));
    mid_x = (first_x+second_x)/2;
    mid_y = (first_y+second_y)/2;
    printf("Distance between A and B is %.2f\nThe coordinates of midpoint of A and B are (%.2f, %.2f)", distance, mid_x, mid_y);
    return 0;
}
