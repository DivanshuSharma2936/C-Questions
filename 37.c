//Reverse String
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


    for (int i = length-1; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
    
        
    
    
return 0;
}
