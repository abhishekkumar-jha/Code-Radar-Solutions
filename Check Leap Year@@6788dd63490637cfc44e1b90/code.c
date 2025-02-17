#include<stdio.h>
int main() {
    int Year;
    scanf("%d" &Year);
    if ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0) {
        printf("%d Leap Year\n");
    } else {
        printf("%d Not a Leap Year\n");
    }

    return 0;
}