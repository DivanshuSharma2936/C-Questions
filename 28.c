#include <stdio.h>

int main() {
    int arr[5];
    printf("Enter Numbers:");
for (int j = 0; j < 5; j++)
{
    scanf("%d",&arr[j]);
}

char ch[5];    
for (int k = 4; k >=0; k--)
{
    printf("%d ",arr[k]);
}
printf("\n");
printf("Enter characters:");
for (int z = 0; z < 5; z++)
{
    scanf(" %c",&ch[z]);
}

    
for (int i = 4; i >=0; i--)
{
    printf("%c ",ch[i]);
}
    
    return 0;
}