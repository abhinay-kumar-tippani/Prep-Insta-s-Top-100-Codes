//Octal to Decimal Conversion


#include <stdio.h>
#include <math.h>

int main() {
    long long int bi;
    int i=0, sum=0, dec=0;
    printf("Enter the binary number: ");
    scanf("%lld", &bi);
    
    
    while(bi!=0){
        sum = bi%10;
        dec += sum*pow(8,i);
        bi = bi/10;
        i++;
    }

    printf("The decimal is: %d",dec);
    return 0;
}
