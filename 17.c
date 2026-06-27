// Armstrong Number Checker
#include <stdio.h>
#include<math.h>

int main() {
    int number,digit,sum=0,n,n1,count=0;
    printf("Enter number:");
    scanf("%d",&number);
    n=number;
    n1=number;
    while(number>0){

        digit = (number % 10);
        count++;
        number = (number / 10);
    }

    while(n>0){

        digit = (n % 10);
        n = (n / 10);
        sum= pow(digit,count) +sum;
    }

    if (n1==sum)
    {
        printf("Number is Armstrong Number because Sum of digits which are individual raised to powers equal to number of digits : %d and given Number is : %d",sum,n1);
    }
    else{
        printf("Number is not Armstrong Number because Sum of digits which are individual raised to powers equal to number of digits : %d and given Number is : %d",sum,n1);
    
    }
    
    return 0;
}