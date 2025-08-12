// C Program to Find the Factors of a Number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The factors of %d are:\n",n);
    for (int i = 1; i < n+1; i++)
    {
        if(n%i==0){
            printf("%d\n",i);
        }
    }
    
return 0;
}