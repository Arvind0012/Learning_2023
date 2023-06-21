/*4. Write a program to pass a pointer to a structure as a parameter to a function and return back a pointer to structure 
   to the calling function after modifying the members of structure.*/

#include <stdio.h>

struct student {
  int id;
  char name[20];
  float marks;
};

struct student* modify_student(struct student* student) {
  student->marks += 10;
  return student;
}

int main() {
  struct student student = {1, "John Doe", 80.0};
  struct student* modified_student = modify_student(&student);

  printf("ID: %d\n", modified_student->id);
  printf("Name: %s\n", modified_student->name);
  printf("Marks: %.2f\n", modified_student->marks);

  return 0;
}