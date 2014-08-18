#include<stdio.h>

int main()
{
    int a,b,absolute;
    scanf("%d%d",&a,&b);
    absolute=(a-b>0)?(a-b):-(a-b);
    printf("%d",absolute);
}
