// Palindrome Number

#include <stdio.h>


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

    if(rev==n1){
    printf("Reverse number is %d and Original number is %d , Hence Number is Palindrome",rev,n1);
    }else{
    printf("Reverse number is %d and Original number is %d , Hence Number is not Palindrome",rev,n1);

    }
    return 0;
}