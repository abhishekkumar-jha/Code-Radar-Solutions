#include <stdio.h>

int main() {
  int num1, num2;

  printf("Enter the first integer: ");
  scanf("%d", &num1);

  printf("Enter the second integer: ");
  scanf("%d", &num2);

  if (num1 > num2) {
    printf("The greatest number is: %d\n", num1);
  } else if (num2 > num1) {
    printf("The greatest number is: %d\n", num2);
  } else {
    printf("Both numbers are equal: %d\n", num1);
  }

  return 0;
}