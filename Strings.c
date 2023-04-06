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
