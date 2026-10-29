
#include <stdio.h>

int main()
{
    int a,b,c,sum;
    float average;
    printf("Enter values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    printf("\nsum of three numbers=%d",sum);
    average=(float)sum/3;
    printf("\nAverage of three numbers=%f",average);
}
