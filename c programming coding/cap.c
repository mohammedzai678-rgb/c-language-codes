#include<stdio.h>

int main ()
{
    char ch;

    printf("enter the letter:  ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("the letter is uppercase");
    }
    else
    {
        printf("the letter is not uppercase");
    }
    return 0;
}