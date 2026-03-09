#include<stdio.h>
void table(int n);
int main()

{
    int n;
    int i;
    printf("enter the number whose table you want: ");
    scanf("%d",&n);
    table(n);
    return 0;
}

void table(int n)
{
    for(int i=1; i<=10; i++)
    {
        int product=n*i;
        printf("the product is %d\n", product);
    }
}


