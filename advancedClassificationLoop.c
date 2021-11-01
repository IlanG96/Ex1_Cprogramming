#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int isArmstrong(int a){
    int length=0,num=a,sum=0,digit=0;
  while (num>0)
  {
      length+=1;
      num=num/10;
  }
  num=a;
  while (num>0)
  {
     digit=num%10;
     sum+=pow(digit,length);
     num=num/10;
  }
  if (sum==a) {return 1;}
  return 0;
  }
  int isPalindrome(int a){
      int reverseA=0,num=a;
      while (num>0)//373 37  30+7 370 3  370+3 373
      {
          reverseA+=(num%10);
          if(num/10!=0) {reverseA=reverseA*10;}

        num=num/10;
      }
      if (a==reverseA) {return 1;}
      return 0;
      }
      
      
    