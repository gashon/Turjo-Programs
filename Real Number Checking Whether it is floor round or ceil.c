#include<stdio.h>

int main()
{
    float n;
    int f,c,r;
    printf("Enter your real number: ");
    scanf("%f",&n);
    if(n>0)
    {
        f=n;
        r=n+.5;
        if((n-f)>0)
        c=f+1;
        else c=f;
    }
    else if(n==0)
    {
        f=0;
        c=0;
        r=0;
    }
    else {
    c=n;
    r=n-.5;
    if((n-c)<0)
    f=c-1;
    else
    f=c;
    }
    printf("Floor: %d\n",f);
    printf("Ceil: %d\n",c);
    printf("Round: %d\n",r);
}
