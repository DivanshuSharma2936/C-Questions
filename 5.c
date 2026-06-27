#include <stdio.h>

int main() {
    int a,b,c,avg;
    printf("Enter Value of a:");
    scanf("%d",&a);
    printf("Enter Value of b:");
    scanf("%d",&b);
    printf("Enter Value of c:");
    scanf("%d",&c);
    avg=(a+b+c)/3;
    printf("Avg of 3 Numbers: %d",avg);


    return 0;
}