

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int num = n;
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num%i==0)
        {
            sum+=i;
        }
        
    }
    
    if (sum>n)
    {
        printf("%d is an Abundant number\n",n);
    }
    else{
        printf("%d is NOT an Abundant number\n",n);
    }
    

    return 0;
}