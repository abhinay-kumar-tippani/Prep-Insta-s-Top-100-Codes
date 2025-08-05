//Check Whether a Number is Prime Number or Not in C

// Method 1: Optimization by break condition
// Method 2: Simple iterative solution
// Method 3: Optimization by n/2 iterations
// Method 4: Optimization by √n
// Method 5: Optimization by skipping even iteration
// Method 6: Basic Recursion technique

// Method 1: Optimization by break condition
#include<stdio.h>
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int flag = 0;

    if(n==2){
        printf("%d is a Prime Number",n);
    }
    else if(n==0 || n==1 || n<0){
        printf("%d is NOT a Prime Number",n);
    }
    else{
        for (int i = 2; i < n; i++)
        {
            if (n%i==0)
            {
                flag=1;
                break;
            }
        }
        
        if(flag==0){
            printf("%d is a Prime Number",n);
        }
        else{
            printf("%d is NOT a Prime Number",n);
        }
    }
}

// Method 2: Simple iterative solution
#include<stdio.h>
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    int count = 0;

    if(n==2){
        printf("%d is a Prime Number",n);
    }
    else if(n<2){
        printf("%d is NOT a Prime Number",n);
    }
    else{
        for (int i = 2; i < n; i++)
        {
            if(n%2==0){
                count++;
            }
        }
        if(count>2){
            printf("%d is NOT a Prime Number",n);
        }
        else{
            printf("%d is a Prime Number",n);
        }
    }
}

// Method 3: Optimization by n/2 iterations
#include<stdio.h>
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int flag=0;
    if(n==2){
        printf("%d is a Prime Number",n);
    }
    else if(n<2){
        printf("%d is NOT a Prime Number",n);
    }
    else{
        for (int i = 2; i < n/2; i++)
        {
            if(n%2==0){
                flag=1;
            }
        }
        if(flag==1){
            printf("%d is NOT a Prime Number",n);
        }
        else{
            printf("%d is a Prime Number",n);
        }
    }
}

// Method 4: Optimization by √n
#include <stdio.h>
#include <math.h>
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int flag = 0;
    int num = sqrt(n);
    if (n == 2)
    {
        printf("%d is a Prime Number", n);
    }
    else if (n < 2)
    {
        printf("%d is NOT a Prime Number", n);
    }
    else
    {
        for (int i = 2; i <= num; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            printf("%d is NOT a Prime Number", n);
        }
        else
        {
            printf("%d is a Prime Number", n);
        }
    }
}


// Method 5: Optimization by skipping even iteration
#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int flag = 0;
    
    if(n==2){
        printf("%d is a Prime Number",n);
    }
    else if(n<2){
        printf("%d is NOT a Prime Number",n);
    }
    else{
        for(int i = 2;i<n;i++){
            if(n%2==0){
                continue;
                if(n%i==0){
                    flag=1;
                }
            }
        }
    }
    if (flag == 1){
        printf("%d is NOT a Prime Number", n);
    }
    else{
        printf("%d is a Prime Number", n);
    }
}



// Method 6: Basic Recursion technique
#include <stdio.h>
int Prime_is(int n);
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(Prime_is(n)){
        printf("%d is a Prime Number",n);
    }
    else{
        printf("%d is NOT a Prime Number",n);
    }

}

Prime_is(n){
    if(n==2){
        return 1;
    }
    else if(n<2){
        return 0;
    }
    else{
        for (int i = 2; i < n; i++)
        {
            if(n%i==0){
                return 0;
            }
        }
    }
    return 1;
}