//Monk and Rotation

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    long int t;
    scanf("%ld",&t);
    while(t!=0)
    {
        long int n,k;
        scanf("%ld %ld",&n,&k);
        int a[n];
        for(int i=0;i<n;i++)   
        {
            scanf("%d",&a[i]);
        }
        for (int i=n-(k%n); i<n; i++)
			printf("%d ", a[i]);

	for (int i=0; i<n-(k%n); i++)
			printf("%d ", a[i]);

        printf("\n");
        t--;
    }
    return 0;
}
