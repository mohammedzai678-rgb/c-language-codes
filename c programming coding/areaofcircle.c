#include<stdio.h>

int main(){
    float radius, area;
    
    printf("enter the radius of the circle: ");
    scanf("%f",&radius);

    area=3.14*radius*radius;
    printf("the area of circle is %f",area);
    return 0;
}