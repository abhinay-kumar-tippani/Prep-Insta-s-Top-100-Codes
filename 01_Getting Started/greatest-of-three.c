//Find the Greatest of the Three Numbers in C
// Method 1: Using if-else Statements 
// Method 2: Using Nested if-else Statements
// Method 3: Using Ternary Operator


// Method 1: Using if-else Statements 
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    
    
    if(a>b && a>c){
        printf("%d is Greatest among three numbers",a);
    }
    else if(b>a && b>c){
        printf("%d is Greatest among three numbers",b);
    }
    else{
        printf("%d is Greatest among three numbers",c);
    }
}


// Method 2: Using Nested if-else Statements
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    
    if(a>b){
        if(a>c){
            printf("%d is Greatest among three numbers",a);
        }
        else{
            printf("%d is Greatest among three numbers",c);
        }
    }
    else{
        if(b>c){
            printf("%d is Greatest among three numbers",b);
        }
        else{
            printf("%d is Greatest among three numbers",c);
        }
    }
}


// Method 3: Using Ternary Operator
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    
    
}