//Search Element
#include <stdio.h>

int main() {
    int k=0;
    printf("Enter length of array:");
    scanf("%d",&k);
    if (k<=0)
    {
        printf("Invalid Array size");
        return 0;
    }
    
    
    int arr[k];
    printf("Enter Numbers:");
for (int j = 0; j < k; j++)
{
    scanf("%d",&arr[j]);
}
printf("Enter Element to Be found/Searched:");

int element;
scanf("%d",&element);
for (int i = 0; i < k; i++)
{
    if (element==arr[i])
    {
        printf("Element is found at index %d of the array",i);
        break;
    }
    else if (element != arr[i] && i==k-1)
    {
        printf("Element not Found");
    }
    
}       
    return 0;
}