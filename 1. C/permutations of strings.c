/******************************************************************************

Permutations of Strings in c

*******************************************************************************/

#include <stdio.h>
#include <string.h>

//Function to swap two characters in a string
void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

//function to generate all permutations of a string
void permute(char *str, int start, int end)
{
    //print, if we reached the end of one permutataion
    if(start == end)
    {
        printf("%s\n", str);
    }
    else
    {
        // Generate all permutations by swapping characters
        for(int i = start; i <= end; i++)
        {
            // Swap the character at the starting index with the character at index i
            swap(str + start, str + i);
            // Recursively generate permutations starting from the next index
            permute(str, start + 1, end);
            // Swap the characters back to their original positions to restore the original string
            swap(str + start, str + i);
        }
    }
}

int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    
    permute(str, 0, n-1);
    
    return 0;
}
