// 5. Write a program to demonstrate the swapping the fields of two structures using pointers

#include <stdio.h>

void swap(int * ptr1, int * ptr2) {
  int temp;

  temp = * ptr1;
  * ptr1 = * ptr2;
  * ptr2 = temp;

}

int main() {

  int a, b, temp;
  int *ptr1, *ptr2;

  printf("Enter the value of a and b: \n");
  scanf("%d %d", &a, &b);
  
  swap(&a,&b);
  printf("\nAfter swapping a = %d and b = %d", a, b);
  
  return 0;

}

