#include <stdio.h>
#include <stdlib.h>
int sum(int n);
int main()
{
    int summation,s;
    printf("enter the number");
    scanf("%d",&s);
    summation=sum(s);
        return summation;
}
int sum(int n){
    int sum1,sum2 ;
if (n==1){
    return 1 ;
}
sum1=sum(n-1);
sum2=sum1+n;
return sum2 ;
}
