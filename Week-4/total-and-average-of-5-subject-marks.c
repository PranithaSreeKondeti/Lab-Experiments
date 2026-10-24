
#include <stdio.h>

int main()
{
    int s1,s2,s3,s4,s5;
    float total,average;
    printf("Enter subject 1 marks:");
    scanf("%d",&s1);
    printf("Enter subject 2 marks:");
    scanf("%d",&s2);
    printf("Enter subject 3 marks:");
    scanf("%d",&s3);
    printf("Enter subject 4 marks:");
    scanf("%d",&s4);
    printf("Enter subject 5 maarks:");
    scanf("%d",&s5);
    total=s1+s2+s3+s4+s5;
    printf("Total marks=%f",total);
    average=total/5;
    printf("Average marks:%f",average);
}
