// C Program to print Power of a number
#include<stdio.h>
int main()
{
    int p;
    double num=1;
    double n;
    printf("Enter the number: ");
    scanf("%lf",&n);
    printf("Enter the power: ");
    scanf("%d",&p);

    for (int i = 0; i < p; i++)
    {
        num = num*n;
    }
    printf("The number is %lf",num);
return 0;
}

    