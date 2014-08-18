#include<stdio.h>

int main()
{
    int i,x,y,product=1;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        product=product*x;
    }
    printf("%d",product);
}
