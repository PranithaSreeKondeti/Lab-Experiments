
#include <stdio.h>

int main()
{
   int a,b,c,r;
   printf("Enter a,b,c values:");
   scanf("%d%d%d",&a,&b,&c);
   r=(a>b&a>c)?printf("%d is big",a):(b>c)?printf("%d is big",b):printf("%d is big",c);
}
