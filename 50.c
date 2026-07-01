//Swap Number using Function
#include <stdio.h>

void swap(int *a,int *b){
    int c;          //here c=5
    c=*a;           //then a stored 6
    *a=*b;          //then b stored 5
    *b=c;
}

int main() {
    int d,e;
    printf("Enter two numbers:");
    scanf("%d %d",&d,&e); //let d=5 and e=6 . so, &d=5 and &e=6
    swap(&d,&e);
    printf("Address of d = %p\n", (void *)&d);
    printf("Address of e = %p\n", (void *)&e);
    printf("Number After Swapping %d and %d",d,e);

    return 0;
}