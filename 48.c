#include <stdio.h>

int fact(int x){
    int a;
    
    if (x==1 || x==0)
    {
        return 1;
    }else{
    a=x*fact(x-1);
    return a;
    }
}

int main() {
    int b;
    printf("Enter a number for Factorial:");
    scanf("%d",&b);

if (b<0)
{
    printf("Factorial not Possible");
}else{
    printf("Factorial of %d is %d",b,fact(b));
}
    return 0;
}