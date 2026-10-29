
#include <stdio.h>

int main()
{
   float f,c;
   printf("Enter temperature value in fahrenheit:");
   scanf("%f",&f);
   c=(5/9.0)*(f-32);
   printf("Celsius temperature:%.2f",c);
}
