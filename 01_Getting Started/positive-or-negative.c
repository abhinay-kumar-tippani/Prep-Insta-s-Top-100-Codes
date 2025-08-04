// Check if a Number is Positive or Negative in C
// Given an integer input, the objective is check whether the given integer is Positive or Negative. In order to do so we have the following methods,

// Method 1: Using Brute Force
// Method 2: Using Nested if-else Statements
// Method 3: Using the ternary operator


// Method 1: Using Brute Force
#include<stdio.h>
void main() {
    int n;
    printf("Enter n value: ");
    scanf("%d",&n);
    
    if(n>0){
        printf("%d is Positive",n);
    }
    else if(n<0){
        printf("%d is Negitive",n);
    }
    else{
        printf("Given number is Zero");
    }
}


// Method 2: Using Nested if-else Statements
#include<stdio.h>
void main(){
    int n;
    printf("Enter n value: ");
    
    if(n!=0){
        if(n>0){
            printf("%d is Positive",n);
        }
        else{
            printf("%d is Negative",n);
        }
    }
    else{
        printf("Given number is Zero");
    }
}


// Method 3: Using the ternary operator
#include<stdio.h>
void main(){
    int n;
    printf("Enter n value: ");
    scanf("%d",&n);

    n>0?printf("%d is Positive",n):printf("%d is Negative",n);
}