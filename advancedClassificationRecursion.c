#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int findReverseNumRecursion(int a){
    int digit = (int)log10(a);
    if(a == 0)
        return 0;

    return ((a%10 * pow(10, digit)) + findReverseNumRecursion(a/10));

}
int isPalindrome(int a)
{
    if(a == findReverseNumRecursion(a))
    {
        return 1;
    }
    
    return 0;
}
 

int ArmstrongCalc(int a,int length){
    if (a==0)return 0;
    return (pow((a%10),length)+ArmstrongCalc(a/10,length));
}

int isArmstrong(int a){
    int length=0,num=a;
    while (num>0)
    {
        length+=1;
        num=num/10;
    }
    if (a==ArmstrongCalc(a,length))
    {
        return 1;
    }
    return 0;
}


