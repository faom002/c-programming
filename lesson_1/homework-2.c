// 2. Create a temperature converter program of given floating point numbers.
#include <stdio.h>

void celsius_to_farhein() {
  char *p;
  int num = 32;
  double sum1 = 0.0, sum = 0.0;
  int celsius = 0;

  printf("type in celsius to convert\n");
  scanf("%d", &celsius);

  /* C x 1.8 = 36

   F = 36 + 32 = 68

    */

  sum = celsius * 1.8;

  sum1 = (double)num + sum;

  printf("%d celsius = %.1f Fahrenheits", celsius, sum1);
}

void farhen_to_celsius() {
  // TODO
}

int main(int argc, char const *argv[]) {

  printf("type 1 for celsius to farhein\n");
  printf("type 2 for farhein to celsius\n");
  scanf("%d", &argc);

  switch (argc) {

  case 1:
    celsius_to_farhein();
    break;
  case 2:
    farhen_to_celsius();
    break;
  }
}
