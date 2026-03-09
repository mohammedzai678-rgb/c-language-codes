#include <stdio.h>

int main()
{
    int i = 1; // 1. We start the flow at 1
    int n;

    printf("Enter the number of times you want to print: ");
    scanf("%d", &n);
 
    // 2. We check: "Is our current count (i) still within the limit (n)?"
    while(i <= n)
    {
        printf("%d. Be water, my friend\n", i);
        
        i++; // 3. We increment i so the loop eventually ends
    }

    return 0;
}