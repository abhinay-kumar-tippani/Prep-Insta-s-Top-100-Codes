// Sum of Digits in C Program
// 123 --> 1+2+3 = 6

#include<stdio.h>
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int num = n;

    int digits = 0;
    while (num!=0)
    {
        num = num/10;
        digits++;
    }
    printf("%d\n",digits);

    printf("%d\n",n);

    int sum = 0;
    for(int i=0;i<digits;i++){
        sum += n%10;
        n=n/10;
    }
    printf("The Sum is %d",sum);
}


//Method-2
#include<stdio.h>
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    int sum=0;
    while(n!=0){
        sum += n%10;
        n = n/10;
    }
    printf("The Sum is %d",sum);
}