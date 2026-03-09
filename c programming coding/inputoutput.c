#include<stdio.h>
int main()
{
    float number1;
    float number2;
    float sum;
    printf("Enter first number: ");
    scanf("%f", &number1);
    printf("Enter second number: ");
    scanf("%f", &number2);
    sum = number1 + number2;
    printf("the sum is %f",sum);
    return 0;
}