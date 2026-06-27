//Factorial
#include <stdio.h>

int main() {
    int a,fact=1;
    printf("Enter number for Factorial :");
    scanf("%d",&a);

    for (int i = 1; i <= a; i++)
    {
        fact=i*fact;
        
    }
    printf("Factorial is :%d\n",fact);

    return 0;
}