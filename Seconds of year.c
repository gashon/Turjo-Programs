#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the number of year: ");
    scanf("%d",&a);
    b=a*365*24*60*60;
    printf("The seconds of %d year are %d",a,b);

}
