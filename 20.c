// Number of Digits Counter
#include <stdio.h>
#include<math.h>

int main() {
    int number,digit,count=0;
    printf("Enter number:");
    scanf("%d",&number);
    while(number>0){

        digit = (number % 10);
        count++;
        number = (number / 10);
    }
    {
        printf("Number of digits are: %d",count);
    }
    
    return 0;
}