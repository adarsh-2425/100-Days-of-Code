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


//Array of Structures

#include <stdio.h>

struct student
{
    int rollno;
    char name[10];
    float mark;
};

int main()
{
    struct student S[3];
    
    printf("Enter details of 3 students : ");
    for(int i = 0; i < 3; i++)
        scanf("%d %s %f", &S[i].rollno, S[i].name, &S[i].mark);
    
    printf("/n Details of 3 students are : ");   
    for(int i = 0; i < 3; i++)
        printf("\n  %d. %s - %f", S[i].rollno, S[i].name, S[i].mark);
}
