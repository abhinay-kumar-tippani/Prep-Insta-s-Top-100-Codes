// C Program to check a Number is Armstrong or not
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int digits = 0;
    int num = n;
    while (num!=0)
    {
        num = num/10;
        digits++;
    }
    
    num = n;
    int rem = 0;
    int arm_sum = 0;
    
    while(num!=0){
        rem = num%10;
        int pov = 1;
        for(int i=0;i<digits;i++){
        pov  = pov*rem;
        }
        arm_sum = arm_sum + pov;
        num = num/10;

    }

    if(arm_sum==n){
        printf("%d is an Armstrong number\n",n);
    }
    else{
        printf("%d is NOT an Armstrong number\n",n);
    }
    printf("%d",arm_sum);
    return 0;
}