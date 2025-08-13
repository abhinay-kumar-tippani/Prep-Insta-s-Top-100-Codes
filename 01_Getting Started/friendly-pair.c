#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers: \n");
scanf("%d %d",&a,&b);

int sum_a = 0;
int sum_b = 0;

for (int i = 1; i < a; i++)
{
    if(a%i==0){
        sum_a+=i;
    }
}


for (int i = 1; i < b; i++)
{
    if(b%i==0){
        sum_b+=i;
    }
}

int a_pair = sum_a/a;
int b_pair = sum_b/b;

if (a_pair==b_pair)
{
    printf("%d and %d are friendly pair\n",a,b);
}
else{
    printf("%d and %d are NOT friendly pair\n",a,b);

}


return 0;
}