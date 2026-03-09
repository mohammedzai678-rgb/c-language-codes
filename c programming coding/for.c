#include<stdio.h>

int main()

{
    int i;
    printf("enter the number of times you want to print : ");
    scanf("%d",&i);
    for(i=1;i<=10;i=i+1)
    {
        printf("%d hello world\n",i);
    }
}
