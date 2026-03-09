#include<stdio.h>
int main(){
int i;
int n;
int sum=0;

printf("enter the first number: ");
scanf("%d", &i);

printf("enter the second number: ");
scanf("%d", &n);

while(i<=n){
    sum = sum + i;
    i++;
}

printf("the sum is %d", sum);

return 0;
}