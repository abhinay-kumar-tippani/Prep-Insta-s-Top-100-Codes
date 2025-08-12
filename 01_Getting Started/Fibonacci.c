// Fibonacci Series Program in C
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int first = 0;
    int second = 1;
    int next = first+second;
    printf("%d\n",first);
    printf("%d\n",second);
    while (next<n)
    {
        printf("%d\n",next);
        first = second;
        second = next;
        next = first + second;
        
    }

return 0;
}
