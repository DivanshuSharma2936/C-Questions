// Largest of Two number
#include <stdio.h>

int main() {
    int a,b,max;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    max= a;
    if (b>max)
    {
        max=b;
    }

     printf("Largest number is %d",max);
    
    return 0;
}