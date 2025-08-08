#include<stdio.h>
int main()
{
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    int num = n;
    int digits=0;
    while (num!=0)
    {
        num = num/10;
        digits++;
    }

    num = n;
    int rem = 0;
    int arm =0;
    while(num!=0){
        rem = num%10;
        int pow = 1;
        for(int i=0;i<digits;i++){
            pow = pow*rem;
        }
        arm = arm + pow;
        num = num/10;
    }
    printf("%d",arm);
return 0;
}




#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the range: ");
    scanf("%d %d",&a,&b);

    for(int i=a;i<b+1;i++){
        int num = i;
        int digits = 0;
        while (num!=0){
            num = num/10;
            digits++;
        }
        num = i;
        int rem = 0,arm = 0;
        while (num!=0){
            int pow = 1;
            rem = num%10;
            for(int j=0;j<digits;j++){
                pow = pow*rem;
            }
            arm = arm + pow;
            num = num/10;
        }
        if(arm == i){
            printf("%d\n",i);
        }
    }
return 0;
}
