#include <stdio.h>
#include <stdlib.h>
int fib(int n);
int main()
{
    int n;
    printf("enter the n for n th term\n");
    scanf("%d",&n);

    return fib(n);
}
int fib(int n)
{
    int fib1,fib2;
    if (n==0||n==1)
    {
        if (n==0)
            return 0;
        if(n==1)
            return 1;

    }
    fib1=fib(n-1)+fib(n-2);
    return fib1;

}
