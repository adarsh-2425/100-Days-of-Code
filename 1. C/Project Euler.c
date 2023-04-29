//Project Euler #1: Multiples of 3 and 5
//https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem?isFullScreen=true

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long int n; 
        scanf("%ld",&n);
        long long int sum = 0;
        
        long int a = (n-1) / 3;
        long int b = (n-1) / 5;
        long int c = (n-1) / 15;
        
        long int flag3 = 3 * (a * (a + 1) / 2);
        long int flag5 = 5 * (b * (b + 1) / 2);
        long int flag15 = 15 * (c * (c + 1) / 2);
        
        sum =  flag3 + flag5 - flag15;
        
        printf("%lld\n", sum);
    }
    return 0;
}
