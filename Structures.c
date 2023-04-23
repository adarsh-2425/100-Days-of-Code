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


//Structure Pointer

#include <stdio.h>

struct student
{
    int rollno;
    char name[10];
    float mark;
};

struct student S = {1, "Lol", 2.4};

int main()
{
    
    struct student *ptr = &S;
    
    //ptr -> name is same as (*ptr).name
    printf("%s", ptr -> name);
}


//Structures in C using typedef

#include <stdio.h>

typedef struct student
{
    int rollno;
    char name[10];
    float mark;
}student;

student S = {1, "Lol", 2.4};

int main()
{
    
    student *ptr = &S;
    
    printf("%s", ptr -> name);
}


//Structure Padding

#include <stdio.h>

typedef struct student
{
    char a; //char size is 1
    int b; //int size is 4
    char c; //char size is 1
}student;

int main()
{
    student S;
    printf("%ld", sizeof(S));
}

//result will be 12 instead of 6. 


//Structure Packing

#pragma pack(1) //used to turn off automatic structure padding
#include <stdio.h>

typedef struct student
{
    char a; //char size is 1
    int b; //int size is 4
    char c; //char size is 1
}student;

int main()
{
    student S;
    printf("%ld", sizeof(S));
}

//Now result will be 6. 
