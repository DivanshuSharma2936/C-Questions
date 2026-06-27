// Fibonacci Series
// Product of Digits
#include <stdio.h>


int main() {
    int n,a=0,b=1,c=0;
    printf("Enter Number of Terms Required:");
    scanf("%d",&n);
    
    printf("Fibonacci Series:\n0\n");
     for (int i = 0; i < n-1; i++)
     {
        a=b;
        b=c;
        c=a+b;
    printf("%d\n",c); 
    }
     
    
    return 0;
}