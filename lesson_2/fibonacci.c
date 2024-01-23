// input is 5 example 
// produces 0,1,1,2,3

#include <stdio.h>
int main() {

  int i, num = 0;

  int f0 = 0, f1 = 1;

  int nextTerm = f0 + f1;

  printf("Enter the number of terms: ");
  scanf("%d", &num);

  printf("Fibonacci Series: %d, %d, ", f0, f1);

  for (i = 3; i <= num; ++i) {
    printf("%d, ", nextTerm);
    f0 = f1;
    f1 = nextTerm;
    nextTerm = f0 + f1;
  }

  return 0;
}

