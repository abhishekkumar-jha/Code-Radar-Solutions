#include <stdio.h>

int main() {
  int number;

  scanf("%d", &number);

  if (number > 0) {
    printf("Positive\n"); 
  } else if (number < 0) {
    printf("Negative\n");  
  } else {
    printf("zero\n");
  }

  return 0;
}