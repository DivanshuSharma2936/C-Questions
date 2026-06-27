// Prime Number Checker
#include <stdio.h>

int main() {
    int a,n=0,np=1;
    printf("Enter number:");
    scanf("%d",&a);

if ( a== 0 || a==1){printf("Number is not prime");}
else{
    for (int i = 2; i < ((a/2)+1); i++)
    {
        if(a%i == 0){
        n=np;
        break;
        }
    }
    
}
if (n==np)
{
    printf("Number is not prime");
}
else
{
    
    printf("Number is prime");
}


    
    return 0;
}