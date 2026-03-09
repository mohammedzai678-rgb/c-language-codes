#include<stdio.h>

int main()
{
    float age;

    printf("enter your age: ");// input statement
    scanf("%f", &age);

    if(age>=18)    // eligible to vote
    {
        printf("you are eligible to vote");
    }
    else if(age<=18 && age>0)          //not eligible to vote
        {
            printf("you are not eligible to vote");
        }
       
    else
    {
        printf("invalid input");
    }
    return 0;
}