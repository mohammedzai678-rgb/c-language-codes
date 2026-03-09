#include<stdio.h>

int main()
{
    float side;
    float area;
    printf("enter the side of the square: ");
    scanf("%f",&side);
    area=side*side;
    printf("the area of square is %f",area);
    return 0;
}