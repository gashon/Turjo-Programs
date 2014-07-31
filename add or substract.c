#include<stdio.h>

int main(void)
{
    int a,b,op;
    printf("Enter 0 to add ,1 to substract: ");
    scanf("%d",&op);
    if(op==0)
    {
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        printf("%d",a+b);
    }
    else{
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        printf("%d",a-b);
    }
    return 0;
}
