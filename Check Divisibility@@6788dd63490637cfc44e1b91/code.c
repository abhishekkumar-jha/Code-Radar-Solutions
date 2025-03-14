#include<stdio.h>
int main() {
    int num;
    scanf("%num", &num);
    if(num % 5 == 0 && num % 11 == 0) {
        printf("Divisible\n");
    }
    else if ((num % 5 != 0) && (num % 11 == 0)) {
        printf("Divisible\n");
    }
    else {
        printf("Not Divisible\n");
    }
    return 0;
}