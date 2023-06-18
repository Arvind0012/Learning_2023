// Array sorting : Bubble Sort

#include<stdio.h> 

 void print(int arr[], int n){  
    int i;  
    for(i = 0; i < n; i++)    {    
        printf("%d ",arr[i]);    
    }        
}  
void bubble(int arr[], int n)  {  
    int i, j, temp;  
    for(i = 0; i < n; i++){    
      for(j = i+1; j < n; j++){    
            if(arr[j] < arr[i]){    
                temp = arr[i];    
                arr[i] = arr[j];    
                arr[j] = temp;     
            }     
        }     
    }     
}  
void main (){
    
    int size;
    printf("Enter the size of Array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the Array Elements\n");
    for(int i = 0; i< size; i++){
        scanf("%d", &*(arr+i));
    }
    int i, j,temp;       
    bubble(arr, size);  
    printf("\nAfter sorting array elements are - \n");    
    print(arr, size);  
}    