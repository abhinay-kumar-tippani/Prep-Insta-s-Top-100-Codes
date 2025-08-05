//Find the Largest of the Two Numbers in C



// Method 1 : Using if – else Statements
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    
    if(a>b){
        printf("%d is Greater than %d",a,b);
    }
    else{
        printf("%d is Greater than %d",b,a);
    }
}



// Method 2 : Using Ternary Operator
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    
    (a>b)?printf("%d is Greater than %d",a,b):printf("%d is Greater than %d",b,a);
}