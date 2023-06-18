// 1. Decimal to Binary

#include <stdio.h>

void decimalToBinary(int num) {  
    int temp = num;
    
    if (num == 0) {
        printf("0");
        return;
    }
   
   int binaryNum[32]; // Assuming 32 bit integer.
   int i=0;
   
   for ( ;num > 0; ){
      binaryNum[i++] = num % 2;
      num /= 2;
   }
   
   printf("Binary number of %d is: \n", temp);
   for (int j = i-1; j >= 0; j--)
      printf("%d", binaryNum[j]);
}

int main() {
   int num;
   printf("Enter the Decimal Number: \n");
   scanf("%d", &num);
   decimalToBinary(num);
   return 0;
}