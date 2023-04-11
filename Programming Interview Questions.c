//Top 40 Coding Interview Questions You Should Know

//How do you reverse a string in C?
  
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    int i, temp;
    int len, left, right;
    
    printf("Enter string : ");
    scanf("%s", str);
    
    len = strlen(str);
    left = 0;
    right = len-1;
    
    for(i = left; i < right; i++)
    {
        temp = str[i];
        str[i] = str[right];
        str[right] = temp;
        right--;
    }
    
    printf (" The reverse of the original string is: %s ",  str);  

    return 0;
}
