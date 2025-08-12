// Finding Nth term of a fibonacci series in C
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int first = 0;
    int second = 1;
    int next;
    int num = 3;
    if(n==1){
        next = 0;
    }
    else if(n==2){
        next = 1;
    }
    else {

        while (num<=n)
        {
            next = first + second;
            first = second;
            second = next;
            num ++;       
        }
        
    }
    printf("The %dth term of fibonacci series is: %d ",n,next);
return 0;
}
