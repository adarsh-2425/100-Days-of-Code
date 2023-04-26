#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int max = a;
    
    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;
    
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}


//addition using pointers
#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int temp  = *a;
    *a = *a + *b; 
    *b = abs(temp - *b);  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
