// Find Second Largest

#include <stdio.h>

int main() {
    int arr[5];
    printf("Enter Numbers:");
for (int j = 0; j < 5; j++)
{
    scanf("%d",&arr[j]);
}

int max = arr[0];
int max2 = arr[0];
if (arr[0]<arr[1])
{
    max2=arr[0];
    max=arr[1];
}else
{
    max2=arr[1];
    max=arr[0];
}

for (int i = 0; i < 5; i++)
{
if (max<arr[i])
{
    max2=max;
    max=arr[i];
}else if(arr[i]>max2 && arr[i] !=max)
{
    max2=arr[i];
}



}




printf("Largest Element is %d\n",max);
printf("2nd Largest Element is %d\n",max2);
    
    return 0;
}