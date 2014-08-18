#include<stdio.h>

int main()
{
    int i,n;
    int sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    printf("Factorial of %d is %d",n,sum);
}
