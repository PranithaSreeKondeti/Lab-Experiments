
#include <stdio.h>

int main()
{
   float si,P,T,R;
   printf("Enter principal amount:");
   scanf("%f",&P);
   printf("Enter time:");
   scanf("%f",&T);
   printf("Enter rate:");
   scanf("%f",&R);
   si=P*T*R/100;
   printf("Simple interest:%f",si);
   
}
