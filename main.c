#include <stdio.h>
#include "NumClass.h"

/**
 * Find Maximum between two numbers.
 */
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

/**
 * Find minimum between two numbers.
 */
int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}

int main()
{
    int num1,num2;
  //printf("enter a number: \n");
    int check =scanf("%d",&num1);
   //printf("enter another number: \n");
    int check2 = scanf("%d",&num2);
    if(check2!=1 || check!=1){
        printf("Error please enter a positive number... Exiting program \n");
        return 1;
    }
    int Min=min(num1,num2);
   int  Max=max(num1,num2);

    printf("The Armstrong numbers are:");
       for (int i = Min; i <= Max; i++)
    {
        if (isArmstrong(i))
        {
            printf(" %d",i);
        }
      
    }
    printf("\nThe Palindromes are:");
    for (int i = Min; i <= Max; i++)
    {
        if (isPalindrome(i))
        {
            printf(" %d",i);
        }
        
    }
    printf("\nThe Prime numbers are:");
    for (int i = Min; i <= Max; i++)
    {
        if (isPrime(i)==1)
        {
            printf(" %d",i);
        }       
    }
     printf("\nThe Strong numbers are:");
    for (int i = Min; i <= Max; i++)
    {
        if (isStrong(i)==1)
        {
            printf(" %d",i);
        } 
    }
    printf("\n");
    return 0;
}
