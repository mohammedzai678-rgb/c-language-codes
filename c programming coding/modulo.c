#include<stdio.h>
#include<math.h>

int main()
{
    float a;
    float b;
    float result;
    printf("enter the first number: ");
    scanf("%f",&a);

    printf("enter the second number: ");
    scanf("%f",&b);

    result=fmod(a,b);
    printf("the result is %f",result);
    return 0;

}