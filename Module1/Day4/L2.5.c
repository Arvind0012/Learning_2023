// Linear Search

#include<stdio.h> 

int main (){
    
    int size, search, index;
    printf("Enter the size of Array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the Array Elements\n");
    for(int i = 0; i< size; i++){
        scanf("%d", &*(arr+i));
    }
    
    printf("Enter the Element to be search: ");
    scanf("%d", &search);
    
    int flag = 0;
    
    for(int i = 0; i< size; i++){
        if(arr[i] == search){
            flag = 1;
            index = i;
            break;
        }
    }
    if(flag){
        printf("Element found at %d index starting from 0", index);
    }
    else{
        printf("Element Not Found");
    }
}    