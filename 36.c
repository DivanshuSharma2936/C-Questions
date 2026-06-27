//String length
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

    
        printf("%s",str);
    
    
return 0;
}
