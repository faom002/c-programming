// 1. Create a program which prints the multiplication table of given input
// number.
// 5 x 5 = 25.... it should be formatted like this.

#include <stdio.h>

void multiplication_table() {
   int num = 0, i = 0;
 scanf("%d", &num);
  
  printf("%d\n", num);


while (1) {


  if ( i <= 12) {
  
  
    int sum = 0;

  sum = i * num;

  printf("%d x %d = %d\n", num, i, sum);
  i++;
  }

}


  }

int main(int argc, char const *argv[]) {




    multiplication_table();
}
