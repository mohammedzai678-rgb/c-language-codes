#include<stdio.h>

void french();
void hind();

int main() {

    char a;
    printf("enter f for french, h for hindi: ");
    scanf(" %c", &a);
   
    if ( a=='f'){french();}

    else if(a=='h') { hind(); }

    else{printf("this will never be printed\n");  }
    
    return 0;

}

void french() {
    printf("bonjour, le monde!\n");
}

void hind() {
    printf("namste, duniya!\n");
}