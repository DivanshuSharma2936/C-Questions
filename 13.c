//sum of first n numbers
#include <stdio.h>

int main() {
    int a,sum=0;
    printf("Enter Value of n :");
    scanf("%d",&a);

    for (int i = 0; i <= a; i++)
    {
        sum=i+sum;
    }
    printf("sum is %d",sum);

    return 0;
}