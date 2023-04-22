//Structures

#include <stdio.h>

struct student
{
    int rollno;
    char name[10];
    float marks;
};

int main()
{
    struct student S1 = {1, "lol", 9.46};

    
    printf("%s", S1.name);
}
