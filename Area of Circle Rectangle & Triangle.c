#include<stdio.h>

int main(void)
{
    char ch;
    int s1,s2;
    float radius;
    printf("Compute area of Circle,Square, or Triangle? ");
    ch=getchar();
    printf("\n");

    if(ch=='C')
    {
        printf("Enter radius of circle: ");
        scanf("%f",&radius);
        printf("Area is %f",3.1416*radius*radius);

    }
    else if(ch=='S')
    {
        printf("Enter length of first side: ");
        scanf("%d",&s1);
        printf("Enter lenght of second side: ");
        scanf("%d",&s2);
        printf("Area is: %d",s1*s2);
    }
    else if(ch=='T')
    {
        printf("Enter length of base: ");
        scanf("%d",&s1);
        printf("Enter height: ");
        scanf("%d",&s2);
        printf("Area is: %d",(s1*s2)/2);
    }

    return 0;
}
