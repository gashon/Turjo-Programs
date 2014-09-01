#include<stdio.h>

int gcd(int x,int y)
{
    int a,b,i,t=0;
    a=(x<y)?x:y;
    b=(x>y)?x:y;
    for(i=a;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
        t++;
        break;

        }
    }
    if(t=1)
    {
        return i;
    }
    else return 0;
}
int main()
{
    int array[100];
    int i,j,N,GCD,a,LCM;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&array[i]);
    }
    for(j=0,a=0;j<N;j++)
    {
        if(a==0)
        {
            GCD=gcd(array[j],array[j+1]);
            LCM=(array[j]*array[j+1])/GCD;

        }
        else {
            GCD=gcd(GCD,array[j]);
            LCM=(array[j]*LCM)/GCD;

        }

        a++;



    }
    printf("GCD: %d \n",GCD);
    printf("LCM: %d ",LCM);




}

