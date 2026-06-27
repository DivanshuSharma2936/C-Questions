//Remove Duplicate Elements
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

    
    for (int i = 0; i < k; i++)
{
    for (int z = i+1; z < k; z++)
    {
         if(arr[i]==arr[z])
        {
            for (int i = z; i < k-1; i++)
            {
                arr[i]=arr[i+1];
            }
            
            z--;
            k--;
        }
        
    }
    
}

for (int i = 0; i < k; i++)
{
    
printf("%d ",arr[i]);
}

    return 0;
}