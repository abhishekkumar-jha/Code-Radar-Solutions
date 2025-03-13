#include<stdio.h>
int main(){
    float a,b,c;
    // printf("Enter Number1: "):
    scanf("%f", &a);
    // printf("Enter Number2: "):
    scanf("%f", &b);
    // printf("Enter Number3: "):
    scanf("%f", &c);
    float avg = (a+b+c)/3;
    printf("Average: %.2f", avg);
    return 0;
}