#include <stdio.h>
int main() {
    char name[50]; 
    int age;
    char hobby[50]; 

    printf("Enter your name: ");
    scanf("%s", name); 

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your favorite hobby: ");
    scanf("%s", hobby);

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}