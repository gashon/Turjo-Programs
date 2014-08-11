#include<stdio.h>

int main(void)
{
    char ch;
    for(ch='A';ch<='Z';ch++)
    {
        printf("%c : %d \n",ch,ch);

    }
    printf("\n\n\n");

    for(ch='a';ch<='z';ch++)
    {
        printf("%c : %d \n",ch,ch);
    }
}
