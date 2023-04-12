//Top 40 Coding Interview Questions You Should Know

//How do you reverse a string in C?
  
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    int i, temp;
    int len, left, right;
    
    printf("Enter string : ");
    scanf("%s", str);
    
    len = strlen(str);
    left = 0;
    right = len-1;
    
    for(i = left; i < right; i++)
    {
        temp = str[i];
        str[i] = str[right];
        str[right] = temp;
        right--;
    }
    
    printf (" The reverse of the original string is: %s ",  str);  

    return 0;
}


//How do you determine if a string is a palindrome?

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10], original[10];
    int i, temp;
  
    
    printf("Enter string : ");
    scanf("%s", str);
    
    int left = 0;
    int right = strlen(str) - 1;
    
    while(right > left)
    {
        if(str[left++] != str[right--])
        {
            printf("String is not palindrome");
            return 0;
        }
    }
  
    printf("%s is a palindrome\n", str);

    return 0;
}


//Find the number of occurrences of a character in a String?

#include <stdio.h>
#include <string.h>

int main()
{
   char str[10], ch;
   int i, count = 0;

    printf("Enter string : ");
    gets(str);

    printf("Enter character : ");
    ch = getchar(); 
    
    //Iterating a loop through the string and comparing each character with a letter 
    for(i = 0; str[i]; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }
    
    printf("Count is %d", count);
    
}


//How to find out if the given two strings are anagrams or not?

#include <stdio.h>
#include <string.h>

void sortArray(char[]);
void lowercase(char []);

int main()
{
   char str1[10], str2[10];
   int i;

    printf("Enter string 1: ");
    scanf("%s", str1);

    printf("Enter string 2: ");
    scanf("%s", str2); 
    
    if(strlen(str1) != strlen(str2))
    {
        printf("Strings are not anagram");
        return 0;
    }
    
    void lowercase(str1);
    void lowercase(str2);
    
    //Sorting the arrays by making call to user defined function sortArray()  
    sortArray(str1); 
    sortArray(str2);
    
    for(i = 0; str1[i]; i++)
    {
        if(str1[i] != str2[i])
        {
            printf("Strings are not anagram");
            return 0;
        }
    }
    
    printf("Strings are anagram");
    return 0;
    
}

void lowercase(char str[])
{
    for(int i = 0; str[i]; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
}


void sortArray(char str[])
    {
        for(int i = 0; i < strlen(str)-1; i++)
        {
            int flag = 0;
            for(int j = 0; j < strlen(str)-1-i; j++)
            {
                if(str[j] > str[j+1])
                {
                    int temp = str[j];
                    str[j] = str[j+1];
                    str[j+1] = temp;
                    flag = 1;
                }
            }
            if(flag == 0)
                break;
        }
    }


// How do you calculate the number of vowels and consonants in a String?

#include <stdio.h>
#include <string.h>


void lowercase(char []);

int main()
{
   char str[10];
   int vowel = 0, conso = 0;
   int i;

    printf("Enter string : ");
    scanf("%s", str);
    
    lowercase(str);

    for(i = 0; str[i]; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel ++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            conso++;
        }
    }
    
    printf("Vowel is %d and consonants is %d", vowel, conso);
    
    return 0;
    
}

void lowercase(char str[])
{
    for(int i = 0; str[i]; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
}


// How do you get the matching elements in an integer array

#include <stdio.h>
#include <string.h>


int main()
{
   int a[10];
   int i, j;
   
   printf("Enter Elements : ");
   for(i = 0; i < 5; i++)
   {
       scanf("%d", &a[i]);
   }
   
   for(i = 0; i < 5; i++)
   {
       for(j = i +1; j < 5; j++)
       {
           if(a[i] == a[j])
           {
               printf("%d ", a[i]);
           }
       }
   }
    
    return 0;
    
}


// How would you implement the bubble sort algorithm?

#include <stdio.h>



int main()
{
   int a[10];
   int i, j, temp, flag;
   
   printf("Enter Elements : ");
   for(i = 0; i < 5; i++)
   {
       scanf("%d", &a[i]);
   }
   
   printf("Before Sorting : ");
   for(i = 0; i < 5; i++)
   {
       printf("%d ",a[i]);
   }
   
   //bubble sort
   for(i = 0; i < 5-1; i++)
   {
       flag = 0;
       for(j = 0; j < 5-1-i; j++)
       {
           if(a[j] > a[j + 1])
           {
               temp = a[j];
               a[j] = a[j+1];
               a[j+1] = temp;
               flag = 1;
           }
       }
       if(flag == 0)
       break;
   }
   
   printf("\nAfter Sorting : ");
   for(i = 0; i < 5; i++)
   {
       printf("%d ",a[i]);
   }
    
    return 0;
    
}


//  How would you implement the insertion sort algorithm?

#include <stdio.h>



int main()
{
   int a[10];
   int i, j, temp, flag;
   
   printf("Enter Elements : ");
   for(i = 0; i < 5; i++)
   {
       scanf("%d", &a[i]);
   }
   
   printf("Before Sorting : ");
   for(i = 0; i < 5; i++)
   {
       printf("%d ",a[i]);
   }
   
   //Insertion sort
   for(i = 1; i < 5; i++)
   {
        temp = a[i];
        j = i - 1;
       
       while (j >= 0 && a[j] > temp)
       {
           a[j+1] = a[j];
           j--;
       }
       
      a[j+1] = temp;
   }
   
   printf("\nAfter Sorting : ");
   for(i = 0; i < 5; i++)
   {
       printf("%d ",a[i]);
   }
    
    return 0;
    
}


//  How do you reverse an array?

#include <stdio.h>



int main()
{
   int a[10];
   int i, j, temp, flag;
   
   printf("Enter Elements : ");
   for(i = 0; i < 5; i++)
   {
       scanf("%d", &a[i]);
   }
   
   printf("Before Reversing : ");
   for(i = 0; i < 5; i++)
   {
       printf("%d ",a[i]);
   }
   
   //Reversing
   for(i = 0; i < 5/2; i++)
   {
       temp = a[i];
       a[i] = a[5-1-i];
       a[5-1-i] = temp;
   }
   
   printf("\nAfter Sorting : ");
   for(i = 0; i < 5; i++)
   {
       printf("%d ",a[i]);
   }
    
    return 0;
    
}


//  How would you swap two numbers without using a third variable?

#include <stdio.h>

int main()
{
   int a = 5, b = 10;
   
   a = a + b;
   b = a - b;
   a = a- b;
   
   printf("a is %d and b is %d", a, b);
    
   return 0;
    
}


//  Print a Fibonacci series using recursion?

#include <stdio.h>

void fibonacci(int n){
    static int f = 0, s = 1, t;
    if(n > 0)
    {
    t = f + s;
    f = s;
    s = t;
    printf("%d ", t);
    fibonacci(n - 1); 
    }
    
}


int main()
{
   int n = 5;

   printf("%d %d ", 0, 1);
   
   fibonacci(n - 2);
    
   return 0;
    
}


// How do you find the factorial of an integer?

#include <stdio.h>

int main()
{
   int n = 3, fact = 1;

   while(n != 0)
   {
       fact *= n;
       n--;
   }
   
   printf("%d", fact);
    
   return 0;
    
}


// How would you implement Binary Search?

#include <stdio.h>

int binarysearch(int a[], int x, int left, int right)
{
    if(right > left)
    {
       int mid = (left + right) / 2;
    
    if(a[mid] == x)
        return mid;
        
    else if (a[mid] > x)
        return binarysearch(a, x, left, mid-1);
    else
        return binarysearch(a, x, mid+1, right); 
    }
    
    return -1;
    
}


int main()
{
   int a[5] = {1, 2, 3, 4, 5};
   int n = sizeof(a)/sizeof(a[0]);
   int x = 3;
   int result;
   
   result = binarysearch(a, x, 0, n-1);
   
   (result == -1)
    ? printf("not present")
    : printf("present at %d", result);
    
   return 0;
    
}


// How would you find the second largest number in an array?

#include <stdio.h>

int main()
{
   
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int big, sec;
    
    big = arr[0];
    
    for(int i = 1; i < n; i++)
    {
        
        if(big < arr[i])
        {
            sec = big;
            big = arr[i];
        }
    }
    
    printf("Second Big is %d", sec);
    return 0;
    
}


//How do you check if the given number is prime?

#include <stdio.h>

int main()
{
   
    int num = 5;
    
    if(num <= 1)
    {
        printf("it cannot be a prime number");
    }
    
    else
    {
        for(int i = 2; i < num; i++)
        {
        if(num % i == 0)
            {
            printf("Number is not prime");
            return 0;
            }
        
        }
    
    printf("Number is prime");
    }
    
    return 0;
    
}


//How do you sum all the elements in an array?

#include <stdio.h>

int main()
{
   
    int num[5] = {1,2,3,4,5};
    int sum;
    
    for(int i = 0; i < 5; i++)
    {
        sum += num[i];
    }
    
    printf("%d", sum);
    
    return 0;
    
}


//palindrome

#include <stdio.h>

int main()
{
    char str[10] = "malayalam";
    
    for(int i = 0; i < 9/2; i++)
    {
        if(str[i] != str[9-1-i])
        {
            printf("not palindrome");
            return 0;
        }
    }
    
    printf("palindrome");

    return 0;
}


//fizbuzz
#include <stdio.h>

int main()
{
    int n = 20;
    
    for(int i = 1; i <= 20; i++)
    {
        int flag3  = (i % 3 == 0);
        int flag5 =  (i % 5 == 0);
        
        if(flag3 && flag5)
            printf("Fizzbuzz ");
            
        else if(flag3)
            printf("fizz ");
            
        else if(flag5)
            printf("buzz ");
            
        else
            printf("%d ", i);
    }

    return 0;
}


//Program to find first N Prime Numbers

#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter limit : ");
    scanf("%d", &num);
    
    int i = 3, j, count;
    
    printf("2 ");
    
    for(count = 2; count <= num; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            break;
        }
        
        if(i == j)
        {
            printf("%d ", i);
            count++;
        }
    }

    return 0;
}
