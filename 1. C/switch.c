//Basic switch condition program

#include <stdio.h>

int main()
{
    char grade;
    
    printf("Enter Your Grade : ");
    scanf("%c", &grade);
    
    //initialising switch
    switch(grade){
        
        case 'a' : 
            printf("Excellent\n");
            break;
        
        case 'b' : 
            printf("Good\n");
            break;
            
        case 'c' :
            printf("Cool\n");
            break;
            
        case 'p' : 
            printf("Lol\n");
            break;
            
        default : 
            printf("Enter the damn grade, kiddo!\n");
    }
    
    printf("Grade you entered is %c", grade);

    return 0;
}