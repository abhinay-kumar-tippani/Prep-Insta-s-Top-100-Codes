// Factorial of a number
#include<stdio.h>
void main(){
    int n,fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);

    int num = n;
    while (num!=0)
    {
        fact = fact*num;
        num = num - 1;
    }
    
    printf("Factorial of %d is: %d\n",n,fact);
}