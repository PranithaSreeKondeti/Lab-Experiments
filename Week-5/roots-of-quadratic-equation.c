
#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float D,root1,root2,root;
    printf("Enter a,b,c values:");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
    {
    root1=(-b+sqrt(D))/(2*a);
    root2=(-b-sqrt(D))/(2*a);
    printf("\nRoot 1=%f",root1);
    printf("\nRoot 2=%f",root2);
    }
    else
      if(D==0)
      {
      root=-b/(2.0*a);
      printf("Equal roots=%f",root);
      }
      else
      printf("Roots are imaginary");
}
