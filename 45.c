// Frequency of a Character

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
{
        int count =0 ;
    for (char i = 'a'; i <='z'; i++)
    {
        for (int j=0; j < l1; j++)
        {
            if(str1[j]==i)
            {
                count++;
            }
            
        }
        if (count!=0)
        {
            printf("Frequency of '%c' is %d\n",i,count);
    
        }
        count=0;
        }
    }
       
        {
        int count1 =0 ;
    for (char i = 'A'; i <='Z'; i++)
    {
        for (int j=0; j < l1; j++)
        {
            if(str1[j]==i)
            {
                count1++;
            }
            
        }
        if (count1!=0)
        {
            printf("Frequency of '%c' is %d\n",i,count1);
    
        }
        count1=0;
        }
    }
    
    


        

    return 0;
}