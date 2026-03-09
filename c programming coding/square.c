#include<stdio.h>
#include<math.h>
void square(int n);

int main()
{
    int n;
    printf("enter the number whose square you want: ");
    scanf("%d",&n);
    square(n);
    return 0;
}

void square(int n)
{
    int s=pow(n,2);
    printf("the square is %d\n", s);
}