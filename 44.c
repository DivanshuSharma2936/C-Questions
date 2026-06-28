// Remove Spaces

#include <stdio.h>

int main() {
    char str1[1000];
    printf("Enter String 1 :\n");
    
      
    fgets(str1,1000,stdin);
    
    
    int l1=0;
       
        while (str1[l1]!='\0')
        {
            l1++;
        }
        printf("Length of the String 1 is %d\n",l1);

        
       
        
    for (int z = 0; z < l1; z++)
    {
    
       if (str1[z]==' ')
    {
        for (int i = z; i < l1-1; i++)
        {
        str1[i]=str1[i+1];
        }
        z--;
        l1--;
        str1[l1]='\0';

    }
    

    }
    
    printf("%s",str1);
    
    


        

    return 0;
}