#include<stdio.h>

int main()
{
    float a,b,c,max,min,second_largest;
    scanf("%f%f%f",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            max=a;
        }
        else
        {
            max=c;
        }
    }
    else
    {
        if(b>c)
        {
            max=b;
        }
        else
        {
            max=c;
        }
    }
    if(a<b)
    {
        if(a<c)
        {
            min=a;
        }
        else
        {
            min=c;
        }
    }
    else
    {
        if(b<c)
        {
            min=b;
        }
        else
        {
            min=c;
        }
    }
    second_largest=(a+b+c)-(max+min);
    if(max<second_largest+min)
    {
        printf("Yes.\n");
        if(a==b && b==c)
        {
            printf("A\n");
        }
        else if(a==b||b==c||c==a)
        {
            printf("B\n");
        }
        else if(max*max==min*min+second_largest*second_largest)
        {
            printf("C\n");
        }
    }
    else
    {
        printf("No,It is not a triangle");
    }



}
