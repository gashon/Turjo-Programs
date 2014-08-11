#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("The Factors of your number are : ");
    for(i=1;i<=n-1;i++)
    {
        if(n%i==0) printf("%d, ",i);
    }
    printf("%d.",n);
    return 0;
}
