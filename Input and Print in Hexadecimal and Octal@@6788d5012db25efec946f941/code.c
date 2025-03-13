#include<stdio.h>
int main(){
    int hex, decimal = 0, octal = 0, base = 1;
    scanf("%x", &hex);
    deciaml = hex;
    int temp = decimal;
    while (temp>0) {
        octal += (temp % 8)*base;
        temp /= 8;
        base *= 10;
    }
    printf("Octal: %o", octal);
    return 0;
}