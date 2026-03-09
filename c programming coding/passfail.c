#include<stdio.H>

int main()

{
    float marks;

    printf("enter your marks: ");
    scanf("%f",&marks);

    if(marks<0)
    {
        printf("invalid input");
    }
    else if(marks>=40 && marks<50)
    {
        printf("E");
    }

    else if (marks>=50 && marks<60) 
    
    {
        printf("C");
    }
    else if(marks>=60 && marks<70)
    {
        printf("B");

    }
    else
    
    {
        printf("A");
    }
    
 
return 0;
}