// LeapYear Checker
#include <stdio.h>

int main() {
    int a;
    printf("Enter the year:");
    scanf("%d",&a);
    if (a%4 == 0)
    {
        printf("It is Leap Year");
    }
    else 
    printf("It is Not a Leap Year");
    return 0;
}