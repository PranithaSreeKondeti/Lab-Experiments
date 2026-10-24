
#include <stdio.h>

int main()
{
    int A,B,C,D;
    float result;
    printf("Enter 4 values:");
    scanf("%d%d%d%d",&A,&B,&C,&D);
    result=A/B*C-B+A*D/3;
    printf("result=%f",result);
    
}
