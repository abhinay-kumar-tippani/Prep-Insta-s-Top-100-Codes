// C Program to Print Prime Numbers In A Given Range
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the range: \n");
    scanf("%d %d",&a,&b);

    printf("The Prime numbers between %d and %d are: \n",a,b);
    for(int i=a;i<b+1;i++){
        int flag=0;
        if(i==1){
            flag=1;
        }
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d\n",i);
        }
    }
}