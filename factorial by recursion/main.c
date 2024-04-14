#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int main()
{
    int a,b;
    printf("enter the number\n");
    scanf("%d",&a);
    b=factorial(a);
    return b ;
}
int factorial(int n)
{int fact1, fact2;
    if (n==0)
    {
        return 1;
    }
fact1=factorial(n-1);
fact2=fact1*n;
return fact2;

}
