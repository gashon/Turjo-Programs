#include<stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("Vowel");
        default : printf("Consonant");
                  break;
    }
}
