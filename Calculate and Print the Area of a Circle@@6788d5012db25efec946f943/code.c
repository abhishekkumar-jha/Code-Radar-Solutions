#include<stdio.h>
int main() {
    float r;
    printf("Enter the radius: ");
    scanf("%f", &r);
    float area = r*3.14*r;
    printf("Area: %f", area);
    return 0;

}