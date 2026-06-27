// GCD of 2 Number
#include <stdio.h>

int main() {
    int a,b,min=1,d=1,gcd=0;
    printf("Enter Two Numbers:");
    scanf("%d %d",&a,&b);
    min= a;
    if (b<min)
    {
        min=b;
    }
    // finding max for range of for loop

    printf("Divisors:");
    
    
    for (int i = 1; i <= min; i++)
    {
        if ((a%i == 0) && (b%i == 0))
        {
            d=i;
            gcd=i;
        }
        if (d!=0)
        {
            
        printf(" %d ",d);
        }
        d=0;
        
        
        
    }
    printf("\nGreatest Common Divisor is %d",gcd);

    
    
    
    

    return 0;
}