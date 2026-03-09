#include<stdio.h>

void hello();
void goodbye();

int main() {

    int a;
    printf("enter 1 for hello, 0 for goodbye: ");
    scanf("%d", &a);
    if ( a==1){hello();}


    else if(a==0) { goodbye(); }

    else{printf("this will never be printed\n");  }
}

void hello() {
    printf("hello, world!\n");
}

void goodbye() {
    printf("goodbye, world!\n");
}
