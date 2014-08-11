#include<stdio.h>

int main()
{
    int a,b,c,d,young;
    printf("Enter four person's age here: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<b){
    if(a<c){
    if(a<d)
        young=a;
    else young=d;

    }
    else{
    if(c<d)
    young=c;
    else young=d;
    }
    }
    else{
    if(b<c){
    if(b<d)
    young=b;
    else young=d;
    }
    else{
    if(c<d)young=c;
    else young=d;
    }
    }
    printf("Youngest person's age is : %d",young);

}
