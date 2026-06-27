// Product of Digits
#include <stdio.h>


int main() {
    int number,digit,sum=1;
    printf("Enter number:");
    scanf("%d",&number);
    while(number>0){

        digit = (number % 10);
        number = (number / 10);
        sum=digit*sum;
    }
    {
        printf("Product of digits are: %d",sum);
    }
    
    return 0;
}