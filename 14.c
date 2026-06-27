//multiplication table
#include <stdio.h>

int main() {
    int a,n;
    printf("Enter number for Multiplication table :");
    scanf("%d",&a);

    for (int i = 1; i <= 10; i++)
    {
        n=a*i;
        printf("%d * %d = %d\n",a,i,n);
    }
    

    return 0;
}