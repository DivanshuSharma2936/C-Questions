// Convert Uppercase to Lowercase
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

    for (int i = 0; i < length; i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
            // since ASCII value differ by 32 
            // if A =65 then a=97.
        }
        
    }
    
printf("%s",str);
    
return 0;
}