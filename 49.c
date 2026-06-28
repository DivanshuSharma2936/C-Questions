//Fibonacci Series Function
#include <stdio.h>

int fibo(int n){
    if (n==0){return 0;}
    if (n==1){return 1;}
        
    return fibo(n-1)+fibo(n-2);

    
}

int main() {
    int p;
    printf("Enter Number:");
    scanf("%d",&p);
for (int i = 0; i <= p; i++)
{
printf("%d ",fibo(i));
}

    return 0;
}