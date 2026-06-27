#include <stdio.h>

int main() {
    int rows,cols;
    printf("Input no. of Rows:");
    scanf("%d",&rows);
    printf("Input no. of Rows:");
    scanf("%d",&cols);
    printf("The Required Rectangle is");
    for (int i = 0; i < cols; i++)
    {
        printf("\n");
        for (int j = 0; j < rows; j++)
        {
            printf("*");
        }
        
    }
    

    return 0;
}