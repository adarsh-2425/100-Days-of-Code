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

//Bitwise operators
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int maxa = 0, maxo = 0, maxx = 0;
  int i, j;
  
  for(i = 1; i <= k; i++)
    {
        for(j = i+1; j <= n; j++)
        {  
            if(((i & j) > maxa) && (i & j) < k)
                maxa = (i & j);
                
            if(((i | j) > maxo) && (i | j) < k)
                maxo = (i | j);
                
            if(((i ^ j) > maxx) && (i ^ j) < k)
                maxx = (i ^ j);
        }
    }
    printf("%d", maxa);
    printf("\n%d", maxo);
    printf("\n%d", maxx);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
