#include <stdio.h>
#include<math.h>

int main()
{
    int choice;
    float a, b;

    printf("----- CALCULATOR -----\n");
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 5 for Remainder\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("enter the first number: ");
    scanf("%f", &a);
    printf("enter the second number: ");
    scanf("%f", &b);
    switch(choice)
    {
        case 1:
            printf("Addition = %.2f\n", a + b);
            break;

        case 2:
            printf("Subtraction = %.2f\n", a - b);
            break;

        case 3:
            printf("Multiplication = %.2f\n", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Division = %.2f\n", a / b);
            else
                printf("Division by zero not allowed\n");
            break;

        case 5:
            printf("Remainder = %.2f\n", fmod(a, b));
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
