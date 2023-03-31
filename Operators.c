//Logical AND operator

#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int result = (a < b) && (printf("Logical And"));

    printf("%d", result);
    //result is Logical And 1

    return 0;
}

//Logical OR operator

#include <stdio.h>

int main()
{
    int a = 4, b = 6;
    int result = (a > b) && (printf("Jenny")) || printf("lectures") && printf("jk");

    printf("%d", result);
    //result = lectures jk 1


    return 0;
}

//Logical AND and OR operator

#include <stdio.h>

int main()
{
    int a = 1, b = 6;
    
    int result1 = a-- && ++b;
     printf("%d %d\n", a, b); // 0 7
    int result2 = --a && ++b;
     printf("%d %d\n", a, b); // -1 8
    
   
    printf("result 1 is %d\n", result1); // 1
    
   
    printf("result 1 is %d\n", result2); // 1

    return 0;
}

//Left shift

#include <stdio.h>

int main()
{
    int a = 10;
    int c = a << 2;
    printf("%d", c);

    return 0;
}

//Bitwise Not

#include <stdio.h>

int main()
{
    int a = 5;
    int c = ~a;
    printf("%d", c);

    return 0;
}

