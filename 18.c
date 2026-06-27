// Reverse Number
#include <stdio.h>
#include<math.h>

int main() {
    int number,digit,n1,rev=0;
    printf("Enter The Number:");
    scanf("%d",&number);
    n1=number;
while (number>0)
    {
    
        digit = number % 10;
        number = number / 10;
       
            rev = rev*10 +digit;
        
    }
    printf("Reverse number is %d and Original number is %d",rev,n1);

    return 0;
}