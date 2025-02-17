#include<stdio.h>
int main() {
    int number;
    printf("");
    scanf("%d", &number);
    if(number % 2 == 0) {
        printf("%d even", number);
    } else{
        printf("%d odd", number);
    }
    return 0;
}