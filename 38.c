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

char rev[length+1];


for (int z = 0; z < length; z++)
{
    rev[z]=str[length -z-1];
    
}
rev[length] = '\0';
    printf("\n");

    int palindrome=1;

for (int i = 0; i < length; i++)
{if (rev[i]!=str[i])
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
