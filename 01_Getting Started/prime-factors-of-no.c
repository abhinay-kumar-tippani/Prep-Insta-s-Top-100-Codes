#include<stdio.h>
int main()
{

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int flag = 0;
    for(int i=2;i<n;i++){
        for (int j = 2; j < i; j++)
        {
            if(i%j==0){
                flag=1;
            }
        }
        if(flag==0){
            printf("%d\n",i);
        }
    }
return 0;
}