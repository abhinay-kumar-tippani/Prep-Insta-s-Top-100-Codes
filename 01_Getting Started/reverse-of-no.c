// // C Program to Reverse a Given Number
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
    
//     int num = n;
//     int digits = 0;
//     while(num!=0){
//         num = num/10;
//         digits++;
//     }
//     int x=1;
//     for(int i=1;i<digits;i++){
//         x *= 10;
//     }
//     int sum = 0;
//     for(int i=0;i<digits;i++){
//         sum = sum + (n%10)*x;
//         n = n/10;
//         x = x/10;
//     }
//     printf("%d",sum);
// }


//Method-2
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int num = n;
 
    int reverse = 0;
    int rem = 0;
    while(n!=0){
        rem = n%10;
        reverse = reverse*10 + rem;
        n = n/10;
    }
    printf("The reverse of %d is: %d\n",num,reverse);
    return 0;
}
