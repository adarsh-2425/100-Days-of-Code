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


//printing pattern using loops
//https://www.hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true&h_r=next-challenge&h_v=zen

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int size = n + (n-1);
  	int arr[size];
    int i, j, k, d;
    
    for(i = 0; i < size; i++){
        arr[i] = n;
    }
    
    int left = 0;
    int right = size;
    
    for(i = 0; i < size; i++){
        for(k = 0; k < size; k++){
            printf("%d ", arr[k]);
        }
    
    if(i < size/2)
    {
        for(j = left + 1; j < right - 1; j++){
            arr[j]--;
        }
        left++;
        right--;
    }
    
    if(i >= size/2)
    {
        left--;
        right++;
        for(d = left + 1; d < right - 1; d++){
            arr[d]++;
        }
        
    }
    printf("\n");
    }
    return 0;
}

//printing tokens in c
//https://www.hackerrank.com/challenges/printing-tokens-/problem?isFullScreen=true
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == ' ')
            printf("\n");
        else {
            printf("%c", s[i]);
        }
    }
    
    free(s);
    return 0;
}


//digit frequency
//https://www.hackerrank.com/challenges/frequency-of-digits-1/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[2000];
    scanf("%s", str);

    int count[10] = {0};
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            count[str[i] - '0']++;
        }
    }
    
    for(int i = 0; i < 10; i++){
        printf("%d ", count[i]);
    }
    
    return 0;
}
