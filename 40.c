//Count vowels
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
        
        int consonants=0;
        printf("Length of the String is %d\n",length);

        for (int i = 0; i < length; i++)
        {
            if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] !='o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] !='O' && str[i] != 'U')
            {
                consonants++;
            }
            
        }
        printf("Number of consonants are:%d",consonants);
        

    
return 0;
}
