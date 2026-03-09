#include <stdio.h>

int main() {
    
    int i = 1;
    int n;

    printf("enter the number of times you want to print: ");
    // Force the terminal to show the text above before waiting for input
    fflush(stdout); 

    if (scanf("%d", &n) != 1) {
        return 1; // Exit if the user doesn't enter a number
    }

    do {
        if (i % 2 != 0) {
            i++; 
            continue;
        }

        printf("%d. be water, my friend\n", i);
        i++;

    } while (i <= n);

    return 0;
}


