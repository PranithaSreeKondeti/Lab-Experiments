
#include <stdio.h>

int main()
{
    int n1,n2,n3,n4;
    int min1,min2,max1,max2;
    printf("Enter the values n1,n2,n3,n4:");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    if(n1>n2)
    {
        min1=n2;
        max1=n1;
    printf("\nmin1=%d,max1=%d",n2,n1);
    }
    else
    {
        min1=n1;
        max1=n2;
    printf("\nmin1=%d,max1=%d",n1,n2);
    }
    if(n3>n4)
    {
        min2=n4;
        max2=n3;
    printf("\nmin2=%d,max2=%d",n4,n3);
    }
    else
    {
        min2=n3;
        max2=n4;
    printf("\nmin2=%d,max2=%d",n3,n4);
    }
    if(min1>min2)
    printf("\n minimum=%d",min2);
    else
    printf("\n minimum=%d",min1);
    if(max1>max2)
    printf("\n maximum=%d",max1);
    else
    printf("\n maximum=%d",max2);
}