// Methods for C Program to Find the Sum of First N Natural Numbers
// // Method 1: Iterative way (Using for loop)
// // Method 2: Iterative way (Using while loop)
// // Method 3: Direct Formula
// // Method 4: Recursive Approach


// // Method 1: Using for loop
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter n value: ");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=0;i<=n;i++){
//         sum = sum + i;
//     }
//     printf("Sum of N natural numbers of %d is %d",n,sum);
// }


// // Method 2: Iterative way (Using while loop)
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter n value: ");
//     scanf("%d",&n);
//     int i=0;
//     int sum=0;
//     while(i!=n+1){
//         sum += i;
//         i++;
//     }
//     printf("Sum of N natural numbers of %d is %d",n,sum);
// }


// // Method 3: Direct Formula
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter n value: ");
//     scanf("%d",&n);
    
//     int sum = (n*(n+1))/2;
//     printf("Sum of N natural numbers of %d is %d",n,sum);
// }
