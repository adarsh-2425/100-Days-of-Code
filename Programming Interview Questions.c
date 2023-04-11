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


//How to find out if the given two strings are anagrams or not?

#include <stdio.h>
#include <string.h>

void sortArray(char[]);
void lowercase(char []);

int main()
{
   char str1[10], str2[10];
   int i;

    printf("Enter string 1: ");
    scanf("%s", str1);

    printf("Enter string 2: ");
    scanf("%s", str2); 
    
    if(strlen(str1) != strlen(str2))
    {
        printf("Strings are not anagram");
        return 0;
    }
    
    void lowercase(str1);
    void lowercase(str2);
    
    //Sorting the arrays by making call to user defined function sortArray()  
    sortArray(str1); 
    sortArray(str2);
    
    for(i = 0; str1[i]; i++)
    {
        if(str1[i] != str2[i])
        {
            printf("Strings are not anagram");
            return 0;
        }
    }
    
    printf("Strings are anagram");
    return 0;
    
}

void lowercase(char str[])
{
    for(int i = 0; str[i]; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
}


void sortArray(char str[])
    {
        for(int i = 0; i < strlen(str)-1; i++)
        {
            int flag = 0;
            for(int j = 0; j < strlen(str)-1-i; j++)
            {
                if(str[j] > str[j+1])
                {
                    int temp = str[j];
                    str[j] = str[j+1];
                    str[j+1] = temp;
                    flag = 1;
                }
            }
            if(flag == 0)
                break;
        }
    }


