#include<stdio.h>
void circle(float r);
void rectangle(float l, float b);
void square(float s);

int main()
{
    int a;
   printf("select 1 for square, 2 for rectangle, 3 for circle: ");
   scanf("%d", &a);

   if (a==1)
   {
    float s;
    printf("enter the side of the square: ");
    scanf("%f", &s);
    square(s);
   }

   else if (a==2)
   {
    float l,b;
    printf("enter the length of the rectangle: ");
    scanf("%f", &l);
    printf("enter the breadth of the rectangle: ");
    scanf("%f", &b);
    rectangle(l,b);
   }

   else if (a==3)
   {
    float r;
    printf("enter the radius of the circle: ");
    scanf("%f", &r);
    circle(r);
   }
   else
    {
     printf("invalid input\n");
    }


   if (a==1)
   {void square(float s);}

   else if (a==2) 
   {void rectangle(float l, float b);}

   else if (a==3)
   {void circle(float r);}
return 0;
}

void circle(float r)
{
    float area=3.14*r*r;
    printf("the area of the circle is %f\n", area);
}

void rectangle(float l, float b)
{
    float area=l*b;
    printf("the area of the rectangle is %f\n", area);
}

void square(float s)
{
    float area=s*s;
    printf("the area of the square is %f\n", area);
}