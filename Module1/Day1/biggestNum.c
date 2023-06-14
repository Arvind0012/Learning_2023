//1. Write a function to find greatest one using
//1.1 if else

#include <stdio.h>

int main()
{
    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);
    
    if(n1 > n2){
        printf("%d is the Greatest one !", n1);
    }
    else{
        printf("%d is the Greatest one !", n2);
    }

    return 0;
}

1.2 Ternary Operator

#include <stdio.h>

int main()
{
    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);
    
    (n1 > n2)?printf("%d is the Biggest one !", n1) : printf("%d is the Biggest one !", n2);

    return 0;
}