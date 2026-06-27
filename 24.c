// Power of Number
#include <stdio.h>


int main() {
    int number,n,pc=0,original;
    printf("Enter number:");
    scanf("%d",&number);
    original=number;
    printf("%d = ",original);
    for (int i = 2; i < 1000; i++)
    {
        while (number%i == 0)
        {
            n=number / i;
            pc++;
            number=n;
        }
        
    
        if (pc>0)
        {
            printf("%d ^%d ",i,pc);
        }
        if (number==1)
        {
            break;
        }
        
        pc=0;
        
    }
    

    
    return 0;
}