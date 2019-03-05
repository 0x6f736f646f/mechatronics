#include <stdio.h>
#include <stdlib.h>

/**< Define constants */
#define SECS_PER_MIN 60
#define MINS_PER_HOURS 60
#define SECS_PER_HOUR 3600

int main()
{
    unsigned int seconds, minutes, hours, secs_left, mins_left;
    printf("Enter number of seconds ( <65000 ): ");
    scanf("%u", &seconds);
    hours = seconds / SECS_PER_HOUR;
    minutes = seconds / SECS_PER_MIN;
    mins_left = minutes % SECS_PER_HOUR;
    secs_left = seconds % SECS_PER_MIN;
    printf("%u seconds is equal to ", seconds);
    printf("%u h, %u m, and %u s \n", hours, mins_left, secs_left);
    return 0;
}
