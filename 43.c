// Compare Two String

#include <stdio.h>

int main() {
    char str1[1000];
    printf("Enter String 1 :\n");
    
      
    scanf("%s",str1);
    
    
    int l1=0;
       
        while (str1[l1]!='\0')
        {
            l1++;
        }
        printf("Length of the String 1 is %d\n",l1);

        
    char str2[1000];
    printf("Enter String 2 :\n");
    
      
    scanf("%s",str2);
    
    
    int l2=0;
       
        while (str2[l2]!='\0')
        {
            l2++;
        }
        printf("Length of the String is %d\n",l2);

       int string=1; // assuming strings are equal. 

if (l1 != l2)
{
    printf("Strings are not Equal in length");
}else{
    for (int i = 0; i < l1; i++)
    {
        if (str1[i]!=str2[i])
        {
        string=0;
        break;
        }
    }
}

if (string == 1 && l1==l2)
{
    printf("Strings are Equal");
}else{
    printf("Strings are not Equal");
}


        

    return 0;
}