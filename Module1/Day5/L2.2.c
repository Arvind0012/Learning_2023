//2. Write a program to enter to Cartesian coordinate points and display the distance between them.

#include <stdio.h>
#include <math.h>

int main() {
	
    float x1, y1, x2, y2, gdist;

	printf("Input x1: ");
	scanf("%f", &x1);
	printf("Input y1: ");
	scanf("%f", &y1);
    printf("Input x2: ");
	scanf("%f", &x2);
	printf("Input y2: ");
	scanf("%f", &y2);

	gdist = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("Distance between the given co-ordinate  points: %.4f", sqrt(gdist));
	printf("\n");
	return 0;
}