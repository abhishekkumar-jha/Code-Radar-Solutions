#include<stdio.h>
int main() {
    int number;
    printf("");
    scanf("%d", &number);
    if(number % 2 == 0) {
        printf("%d even");
    } else{
        printf("%d odd");
    }
    return 0;
}