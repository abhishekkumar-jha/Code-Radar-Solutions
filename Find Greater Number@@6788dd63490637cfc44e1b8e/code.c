#include <stdio.h>

int main() {
  int num1, num2;

  scanf("%d %d", &num1, &num2); // Read both numbers at once

  if (num1 > num2) {
    printf("%d\n", num1);
  } else if (num2 > num1) {
    printf("%d\n", num2);
  } else {
    printf("%d\n", num1); // If they are equal, print either one
  }

  return 0;
}