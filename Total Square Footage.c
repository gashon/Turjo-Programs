#include<stdio.h>

int main(void)
{
    int rooms,len,width,total;
    int i;
    printf("Number of rooms?");
    scanf("%d",&rooms);
    total =0;
    for(i=rooms;i>0;i--){
        printf("Enter length: ");
        scanf("%d",&len);

        printf("Enter width: ");
        scanf("%d",&width);

        total=total+len*width;
    }
    printf("Total Square Footage: %d",total);

    return 0;
}
