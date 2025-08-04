// Method 1: Using Brute Force

#include<stdio.h>
void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n%2==0){
        printf("Given number is Even");
    }
    else{
        printf("Given number is Odd");
    }
}


// Method 3: Using the ternary operator
#include<stdio.h>
void main(){
    int n;
    printf("Enter n value: ");
    scanf("%d",&n);

    n%2==0?printf("Given number is Even"):printf("Given number is Odd");
}