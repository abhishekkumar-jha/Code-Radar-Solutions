#include<stdio.h>
int main(){
    double num;
    // printf("Enter a double precision number: ");
    scanf("%lf", &num);
    printf("You entered: %.4lf", num);
    return 0;
}