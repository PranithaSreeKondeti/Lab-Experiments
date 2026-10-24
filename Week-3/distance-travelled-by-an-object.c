
#include <stdio.h>

int main()
{
    float distance,time, speed;
    printf("Enter speed of an object in kmph:");
    scanf("%f",&speed);
    printf("Enter time taken in hr:");
    scanf("%f",&time);
    distance=(float)speed*time;
    printf("Distance travelled by object in km:%f",distance);
}
