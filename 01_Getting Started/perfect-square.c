// 1,4,9,16,25,36,49,64,81,100...

#include<stdio.h>
#include<math.h>
int main()
{

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int sq = sqrt(n);
    int num = sq*sq;

    if(num==n){
        printf("%d is a perfect square\n",n);
    }
    else{
        printf("%d is NOT a perfect square\n",n);
    }
return 0;
}


