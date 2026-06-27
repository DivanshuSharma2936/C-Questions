//Merge Two Arrays
#include <stdio.h>

int main() {
    int k=0;
    printf("Enter length of array 1:");
    scanf("%d",&k);
    if (k<=0)
    {
        printf("Invalid Array size");
        return 0;
    }
    int arr1[k];
    printf("Enter Numbers:");
for (int j = 0; j < k; j++)
{
    scanf("%d",&arr1[j]);
}
int z=0;
    printf("Enter length of array 2:");
    scanf("%d",&z);
    if (z<=0)
    {
        printf("Invalid Array size");
        return 0;
    }
    int arr2[z];
    printf("Enter Numbers:");
for (int j = 0; j < z; j++)
{
    scanf("%d",&arr2[j]);
}
int arr3[z+k];
for (int i = 0; i < k; i++)
{
    arr3[i]=arr1[i];
}
for (int i = 0; i < z; i++)
{
    arr3[k+i]=arr2[i];
}
printf("New Array is:\n");
for (int i = 0; i < z+k; i++)
{
    printf("%d ",arr3[i]);
}

return 0;
}

