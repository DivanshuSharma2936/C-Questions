// Count Words

#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter String:\n");
    
      
    fgets(str,1000,stdin);
    
    
    int length=0;
       
        while (str[length]!='\0')
        {
            length++;
        }
        printf("Length of the String is %d\n",length);

        int words=0;

        if ((str[0] >='A' && str[0]<='Z') || (str[0] >='a' && str[0]<='z'))
            {
                words=1;
            }else{
                words=0;
            }

        for (int i = 0; i < length-1; i++)

        {
            
            
            if (((str[i]==' ' && ((str[i+1] >='A' && str[i+1]<='Z') || (str[i+1] >='a' && str[i+1]<='z')))))
            {
                words++;
            }
            
        }
        
        printf("Number of WORDS are:%d",words);
        

    return 0;
}