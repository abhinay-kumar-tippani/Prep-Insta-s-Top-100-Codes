// 6 --> 1+2+3
// 28 --> 1+2+4+7+14


#include<stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int num = n;
    int perfect = 0;
    // while (num!=0)
    {
        for (int i = 1; i < num; i++)
        {
            if(num%i==0){
                perfect+=i;
            }
        }
        
    }
    
    if(n==perfect){
        printf("%d is a perfect number\n",n);
    }
    else{
        printf("%d is NOT a perfect number\n",n);
    }

return 0;
}