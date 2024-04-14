#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
     printf("enter the  number to be reversed\n");
    scanf("%d",&number);
    int n=number;
    int reverse=0;
    int rem,t;
    t=100;
    while(n>0)
    {
      rem=n%10;
      reverse=reverse*10+rem;
      n=n/10;
    }
    printf("you entered : %d\n",number);
    printf("reverse of the number is %d",reverse);


    return 0;
}
