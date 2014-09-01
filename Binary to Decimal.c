#include<stdio.h>

int main()
{
    int bin,dec=0,i,r,a;
    scanf("%d",&bin);
    for(i=0,a=1;bin!=0;i++,a=a*2)
    {
        r=bin%10;
        bin=bin/10;
        dec=dec+r*a;
    }
    printf("%d",dec);

    return 0;
}
