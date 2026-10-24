
#include <stdio.h>

int main()
{
    int i,J;
    printf("Enter i value:");
    scanf("%d",&i);
    J=(i++)+(++i);
    printf("J=%d",J);
}
