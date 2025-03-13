#include<stdio.h>
int main(){
    char name[100];
    int age;
    char hobby[100];
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Hobby: ");
    scanf("%s", hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s", hobby);
    return 0;

}