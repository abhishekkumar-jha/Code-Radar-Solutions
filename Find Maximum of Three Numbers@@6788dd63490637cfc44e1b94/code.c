#include <stdio.h>

int main() {
  int num1, num2, num3;

  scanf("%d %d %d", &num1, &num2, &num3); // Read both numbers at once

  if (num1 > num2 && num1 > num2) {
    printf("%d\n", num1);
  } else if (num2 > num1 && num2 > num3) {
    printf("%d\n", num2);
  }
  else {
    printf("%d\n", num3); // If they are equal, print either one
  }

  return 0;
}