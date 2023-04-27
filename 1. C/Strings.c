//Program to find length of a string

#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    int count = 0;
    
    printf("Enter Name : ");
    scanf("%s", &name);
    
    count = strlen(name);
    
    puts(name);
    printf("Length is %d", count);

    return 0;
}

//Program ro reverse a string without using strrev()

#include <stdio.h>
#include <string.h>

int main()
{
    
    char str[10] = "compiler", temp;
    int i, len;
    
    len = strlen(str);
    
    printf("\nBefore : %s", str);
    
    for(i = 0; i < len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
    
    printf("\nAfter : %s", str);

    return 0;
}

//Program to convert a String from Upper Case to Lower Case without using strlwr()

#include <stdio.h>

int main()
{
    
    char str[10] = "COmpiLer";
    int i;
    
    printf("\nBefore : %s", str);
    
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        
    }
    
    printf("\nAfter : %s", str);

    return 0;
}

