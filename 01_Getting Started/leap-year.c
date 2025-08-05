// Check if a Year is a Leap Year or Not in C
// Thus scientists set following conditions for a year to be leap year -
// 1. If a year is divisible by 400
// 2. If a year is divisible by 4 but not divisible by 100
// Method 1: Using if-else Statements 1
// Method 2: Using if-else Statements 2


// Method 1: Using if-else Statements 1
#include<stdio.h>
void main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    
    if(year%400==0){
        printf("%d is a Leap Year",year);
    }
    else if(year%4==0 && year%100!=0){
        printf("%d is a Leap Year",year);   
    }
    else{
        printf("%d is not a Leap Year",year);
    }
}


// Method 2: Using if-else Statements 2
#include<stdio.h>
void main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    
    if(year%400==0 || (year%4==0 && year%100 != 0)){
        printf("%d is a Leap Year",year);   
    }
    else{
        printf("%d is a Leap Year",year);   
    }

}