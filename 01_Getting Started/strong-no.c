// 145 = 1! + 4! + 5!


#include<stdio.h>
int main()
{

    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int num = n;
    int size = 0;
    while (num!=0)
    {
        num = num/10;
        size++;
    }
    num = n;
    int str = 0;
    int strong=0;
    while (num!=0)
    {
        str = num%10;
        for (int i = str-1; i>0 ; i--)
        {
            str = str*i;
        }
        
        strong = strong + str;
        num = num/10;
    }
    
    if (strong==n)
    {
        printf("%d is a Strong Number\n",n);
    }
    else{
        printf("%d is NOT a Strong Number\n",n);
    }
    

return 0;
}