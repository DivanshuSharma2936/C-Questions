#include <stdio.h>

int main() {
    int rows,cols;
    printf("Input no. of Rows:");
    scanf("%d",&rows);
    for (int i = rows; i > 0; i--)
    {
        
        for (int j = i; j > 0 ; j--)
        
            {
                printf("*");
            }
        printf("\n");
    }
    

    return 0;
}