#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the range: \n");
    scanf("%d %d",&a,&b);

    int first = 0;
    int second = 1;
    int next = first+second;

    printf("The fibonacci series from %d to %d is:\n",a,b);

    if(a==0){
        printf("%d\n",first);
        printf("%d\n",second);
    }
    else if (a==1)
    {
        printf("%d\n",second);
    }
    while (next<b)
    {
        if(next>=a){
            printf("%d\n",next);

        }
        first = second;
        second = next;
        next = first+second;
    }
    
return 0;
}