// No. of days Elapsed

#include <stdio.h>

int main() {
   int dayOfMonth[] ={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   int dd, mm, yy, dayElapsed;
   printf("Enter the Date: \n");
   scanf("%d", &dd);
   printf("Enter the Month of Year: \n");
   scanf("%d", &mm);
   printf("Enter the Year: \n");
   scanf("%d", &yy);
   
   int sum = 0;
   
   for(int i = 0; i< mm-1; i++){
       sum += dayOfMonth[i];
   }
   
   dayElapsed = sum + dd;
   if(yy % 4 == 0 && yy % 400 == 0) {
       dayElapsed + 1;
   }
   
   printf("No of days elapsed is: %d", dayElapsed);
   
}