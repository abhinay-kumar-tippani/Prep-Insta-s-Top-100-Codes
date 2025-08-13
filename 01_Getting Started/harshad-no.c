// 18 --> 1+8=9 ==> 9 is div by 18


#include<stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int num = n;
    int temp = 0;
    int har = 0;
    while (num!=0)
    {
        temp = num%10;
        har += temp;
        num /= 10;
    }
    
    if (n%har==0){
        printf("%d is a harshad number\n",n);
    }
    else{
        printf("%d is NOT a harshad number\n",n);
    }

    return 0;
}