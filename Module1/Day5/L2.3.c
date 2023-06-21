/*3. Implement structures to read, write and compute average- marks and the students scoring above
   and below the average marks for a class of N students.*/

#include <stdio.h>

struct student {
  int marks;
} student[10];

int main() {
  int i, n;
  float total = 0, avg_marks;

  printf("Enter the number of students in class: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Enter student %d marks: ", i + 1);
    scanf("%d", &student[i].marks);
  }

  for (i = 0; i < n; i++) {
    total += student[i].marks;
  }

  avg_marks = total / n;
  printf("Average marks = %.2f\n", avg_marks);

  for (i = 0; i < n; i++) {
    if (student[i].marks >= avg_marks) {
      printf("Student %d marks = %d (above average)\n", i + 1, student[i].marks);
    } else {
      printf("Student %d marks = %d (below average)\n", i + 1, student[i].marks);
    }
  }

  return 0;
}
