// Calculator using Function
#include <stdio.h>

int a(int a,int b){
    return a+b;
    }

    int s(int a,int b){
    return a-b;
    }

    int m(int a,int b){
    return a*b;
    }

    float g(float a,float b){
    return a/b;
    }

    int r(int a,int b){
    return a%b;
    }


int main() {
    int c,d;
    printf("Enter Two Numbers:");
    scanf("%d %d",&c,&d);
int e=0;
printf("1.add\n2.subtract\n3.multiply\n4.divide\n5.remander\nEnter number for function,You want to use:");
    scanf("%d",&e);

    switch (e)
    {
    case 1:
        printf("=%d",a(c,d));
        break;
    case 2:
        printf("=%d",s(c,d));
        break;
    case 3:
        printf("=%d",m(c,d));
        break;
        
        
        
    case 4:if (d==0)
        {
            printf("invalid");
            break;
        }else{
        printf("=%f",g(c,d));
        break;}
    case 5:if (d==0)
        {
            printf("invalid");
            break;
        }else{
        printf("=%d",r(c,d));
        break; }   
    default:
        printf("Invalid Input");
        break;
    }


return 0;
}