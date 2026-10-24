
#include <stdio.h>

int main()
{
    int a,b,choice;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("\n 1.Addition");
    printf("\n 2.Subtraction");
    printf("\n 3.Multiplication");
    printf("\n 4.Division");
    printf("\n Enter choice:");
    scanf("%d",&choice);
    if(choice==1)
    printf("result=%d",a+b);
    else if(choice==2)
    printf("result=%d",a-b);
    else if(choice==3)
    printf("result=%d",a*b);
    else if(choice==4)
      {
        if(b==0)
        printf("Division by zero is not possible");
        else
        printf("result=%f",(float)a/b);
      }
      else
      printf("Invalid option");
}
