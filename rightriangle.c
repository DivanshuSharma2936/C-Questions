#include <stdio.h>

int main() {
    int rows,cols,n;
    printf("Input no. of Rows:");
    scanf("%d",&rows);
    n=rows;
    for (int i = 0; i < rows; i++)
    {
        
        {

    
        
        for (int k = 0; k < n-i-1; k++)

        {
            printf(" ");
        }
        
        for (int j = 0; j <= i ; j++)
        
            {
                printf("*");
            }
        printf("\n");
        
    }
    }

    

    return 0;
}