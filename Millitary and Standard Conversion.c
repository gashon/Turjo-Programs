#include<stdio.h>

int main()
{
    int hm,mm,hs,ms;
    printf("Enter Military hour & minutes: ");
    scanf("%d",&hm);
    scanf("%d",&mm);
    printf("Your standard time is %d hour %d minutes",(hm+11)%12+1,mm);
}
