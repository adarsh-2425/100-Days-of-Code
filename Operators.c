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
