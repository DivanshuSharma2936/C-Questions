// largest element
#include <stdio.h>

int main() {
    int arr[5];
    printf("Enter Numbers:");
for (int j = 0; j < 5; j++)
{
    scanf("%d",&arr[j]);
}

int max = arr[0];
for (int i = 0; i < 5; i++)
{

if (arr[i]>max)

    max=arr[i];
}
printf("Largest Element is %d",max);
    
    return 0;
}