// smallest element
#include <stdio.h>

int main() {
    int arr[5];
    printf("Enter Numbers:");
for (int j = 0; j < 5; j++)
{
    scanf("%d",&arr[j]);
}

int min = arr[0];
for (int i = 1; i < 5; i++)
{

if (arr[i]<min)

    min=arr[i];
}
printf("Smallest Element is %d",min);
    
    return 0;
}