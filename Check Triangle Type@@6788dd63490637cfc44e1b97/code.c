#include <stdio.h>

int main() {
  int num1, num2, num3;

  scanf("%d %d %d", &num1, &num2, &num3); // Read both numbers at once

  if (num1 == num2 && num1 == num2) {
    printf("Equilateral\n");
  } else if (num1 == num2 || num1 != num3) {
    printf("Isosceles\n");
  }
  else {
    printf("Scalene\n"); 
  }

  return 0;
}