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


//How do you determine if a string is a palindrome?

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10], original[10];
    int i, temp;
  
    
    printf("Enter string : ");
    scanf("%s", str);
    
    int left = 0;
    int right = strlen(str) - 1;
    
    while(right > left)
    {
        if(str[left++] != str[right--])
        {
            printf("String is not palindrome");
            return 0;
        }
    }
  
    printf("%s is a palindrome\n", str);

    return 0;
}


//Find the number of occurrences of a character in a String?

#include <stdio.h>
#include <string.h>

int main()
{
   char str[10], ch;
   int i, count = 0;

    printf("Enter string : ");
    gets(str);

    printf("Enter character : ");
    ch = getchar(); 
    
    //Iterating a loop through the string and comparing each character with a letter 
    for(i = 0; str[i]; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }
    
    printf("Count is %d", count);
    
}



