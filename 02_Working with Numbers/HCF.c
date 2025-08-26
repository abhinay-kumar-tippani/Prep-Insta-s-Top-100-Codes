//Write a  C program to find  HCF of Two Numbers


//Method-1
#include <stdio.h>
int main() {
    int num1, num2, HCF;
    printf("Enter two numbers :\n");
    scanf("%d %d",&num1, &num2);
    
    int max;
    if(num1>num2){
        max = num1;
    }
    else{
        max = num2;
    }
    
    for(int i=1;i<max;i++){
        if(num1%i == 0 && num2%i == 0){
            HCF = i;
        }
    }
    printf("HCF of %d and %d is: %d", num1, num2, HCF);
    return 0;
}


//Method-2
#include <stdio.h>
int main() {
    int num1, num2, HCF;
    printf("Enter two numbers :\n");
    scanf("%d %d",&num1, &num2);
    
    while(num1!=num2){
        if(num1>num2){
            num1 -= num2;
        }
        else{
            num2 -= num1;
        }
    }
    printf("HCF is %d",num1);
    return 0;
}
