#include<stdio.h>

int main()
{
    int a,b,c,d,g;
    printf("Enter the first person's height in feet & inch: ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Enter the second person's height in feet & inch: ");
    scanf("%d",&c);
    scanf("%d",&d);

    g=a*12+b-c*12-d;
    printf("The difference between first & second person's height is: %d feet %d inch",g/12,g%12);


}
