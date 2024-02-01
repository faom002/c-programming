/*


   first create a structure of your choice, and then it should have a integer
field. Let's say you created "students" structure, and it has "roll_number"
field. Now create an array of type "students" and then take each student's roll
number form the user and then print all of them.

BONUS: If you can, you can also include "name" field. and take name and roll
number.





*/

#include <stdio.h>
#include <sys/_types/_size_t.h>
struct Students {

  int roll_number;

  char name[20];
};

int main() {

  struct Students students[2];

  printf("type in roll_number and name for students\n");
  for (size_t i = 0; i < 2; i++) {

    printf("write student roll\n");
    scanf("%d", &students[i].roll_number);

    printf("write students name\n");
    scanf("%s", students[i].name);
  }
  printf("\n");


  printf("printing out current students\n");

  for (size_t i = 0; i < 2; i++) {

    printf("roll_number %d students name %s\n", students[i].roll_number, students[i].name);


  }

  return 0;
}
