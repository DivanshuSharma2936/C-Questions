// Sum of Array
#include <stdio.h>

int main() {
    int arr[5];
    printf("Enter Numbers:");
for (int j = 0; j < 5; j++)
{
    scanf("%d",&arr[j]);
}

int sum=0;
for (int i = 0; i < 5; i++)
{
    sum=arr[i] + sum;
}
printf("Smallest Element is %d",sum);
    
    return 0;
}