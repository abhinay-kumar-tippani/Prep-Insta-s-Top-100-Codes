// 5^2 = 25
// 25^2 = 625


#include<stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int num = n;
    int count=0;
    while (num!=0)
    {
        num = num/10;
        count++;
    }
    // printf("%d",count);
    num = n*n;
    int dec=1;
    int temp1 =0;
    int atm=0;
    int temp=0;
    for (int i = 0; i < count; i++)
    {
        temp = num%10;
        temp1 = temp*dec;
        atm = atm + temp1;
        num = num/10;
        dec *= 10;
    }
    if(atm==n){
        printf("%d is an Automorphic number\n",n);
    }
    else{
        printf("%d is NOT an Automorphic number\n",n);
    }
    

return 0;
}