//Prime Function Check
#include <stdio.h>

int prime(int x){
    int p=1;
    if (x>=0)
    {
       if (x==0 || x==1 )
    {
        return 0;
    }else{
        for (int i = 2; i <= x/2; i++)
        {
            if (x%i== 0)
            {
                p=0;
                break;
            }
            
        }
        return p;
        
    } 
    }else if(x<0){
        return -1;
    }
    
    
    
}

int main() {
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
int p=0;
    p=prime(n);
    if (p<=0)
    {
        printf("Not Prime");
    }else
    {
        printf("It is Prime");
    }
    
    
    return 0;
}