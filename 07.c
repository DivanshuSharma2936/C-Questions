// positive or negative

#include <stdio.h>

int main() {
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if (a > 0)
    {
        printf("Number is Postive");
    }else if (a == 0)
    {
        printf("Number is 0");
    }else if(a < 0){
    printf("Number is Negative");
    }
    return 0;
}