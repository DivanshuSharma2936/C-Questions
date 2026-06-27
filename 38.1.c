//Palindrome String
#include <stdio.h>

int main() {
    
    char str[50];
    printf("Enter String:\n");
    
      
    scanf("%s",str);
    
    
    int length=0;
       
        while (str[length]!='\0')
        {
            length++;
        }
        
        
        printf("Length of the String is %d\n",length);


int palindrome=1;

for (int i = 0; i < length/2; i++)
{
    str[i]=str[length -i-1];
    if (str[i]!=str[length-i-1])
    {palindrome=0;
        break;
}
}
if (palindrome==0)
{
    printf("It is not a Palindrome");
}else if (palindrome==1){
    printf("It is a Palindrome");
} 


    
    
        
    
    
return 0;
}
