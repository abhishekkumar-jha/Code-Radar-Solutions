#include<stdio.h>
int main() {
    int year;
    scanf("%d");

    
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d Leap Year\n");
    } else {
        printf("%d Not a Leap Year\n");
    }

    return 0;
}