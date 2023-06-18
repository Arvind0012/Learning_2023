// 2. Min and Max of 1D Array

#include <stdio.h>

int main()
{
    int size, average;
    printf("Enter the size of Array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the Array Elements\n");
    for(int i = 0; i< size; i++){
        scanf("%d", &*(arr+i));
    }
    
    int min = arr[0];
    int max = arr[0];
    for(int i = 0; i< size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        else{
            max = arr[i];
        }
    }
    printf("The Minimum of Array is: %d\n", min);
    printf("The Maximum of Array is: %d\n", max);
    

    return 0;
}
