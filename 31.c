//Count Odd Numbers
#include <stdio.h>

int main() {
    int arr[5];
    printf("Enter Numbers:");
for (int j = 0; j < 5; j++)
{
    scanf("%d",&arr[j]);
}

int count=0;
for (int i = 0; i < 5; i++)
{
    if(arr[i]%2 != 0)
    count++;
}
printf("Number of Odd Elements are %d",count);
    
    return 0;
}