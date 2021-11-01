#include <stdio.h>
#include "NumClass.h"
#include <math.h>

int isPrime(int a){
    int curr=2;
    if(a<=1)return 0;

    while (curr<=(int)sqrt(a)+1)
    {
        if(a%curr==0){return 0;}

        curr+=1;
    }
    return 1;
}

int count(int num){
    int count=1;
    while (num>10){
        count++;
        num=num/10;
    }
    return count;
}

int isStrong(int a){
int finalsum=0,check=a;
int count1=count(a);
for (int i = 0; i < count1; i++){
    int sum=1;
    int x=a%10;
    for (int j = 1; j <= x; j++){
        sum=sum*j;
    }
    finalsum=finalsum+sum; 
    a=a/10;
}
if(finalsum==check){
    return 1;
}
return 0;
}
