// Palindrome Program in C
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int num = n;
    
    int rev = 0;
    int rem = 0;
    while(num!=0){
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }

    if(rev == n){
        printf("%d is a Palindrome\n",n);
    }
    else{
        printf("%d is NOT a Palindrome\n",n);
    }

    return 0;
}