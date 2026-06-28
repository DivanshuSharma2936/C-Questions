//Swap Number using Pointers
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b); 
    int temp;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("Address of d = %p\n", (void *)&a);
    printf("Address of e = %p\n", (void *)&b);
    printf("Number After Swapping %d and %d",a,b);

    return 0;
}