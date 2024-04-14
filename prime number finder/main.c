#include <stdio.h>
int main()
{
int i,j,a,b;
printf("enter any number:\n");
scanf("%d",&a);
for(i=2;i<a;i++)
{
    j=a%i;
    if(j==0)
    break;
}
        if(j==0)
            printf("%d is not a prime number",a);
        if(j!=0)
            printf("%d is a prime number",a);
    return 0;
}
