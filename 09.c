// Largest of Three number
#include <stdio.h>

int main() {
    int a,b,c,max;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    max= a;
    if (b>max)
    {
        max=b;
    }
    if (c>max)
    {
        max=c;
    }
     

     printf("Largest number is %d",max);
    
    return 0;
}