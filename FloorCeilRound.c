#include<stdio.h>

int main()
{
    float n;
    int f,c,r;
    scanf("%f",&n);
    f=n;
    r=n+.5;
    if((n-f)>0)
    c=f+1;
    else c=f;
    printf("Floor: %d\n",f);
    printf("Ceil: %d\n",c);
    printf("Round: %d\n",r);
}
