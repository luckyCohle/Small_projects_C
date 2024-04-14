#include<stdio.h>
#define i
int main()
{
int a,j;
int b;
int P[100]={2,3};
for (i=2;i<100;i=i+2)
{
    b=i+3;
    for(j=2;j<100;j++)
    {
        a=b%j;

    }
    if (a!=0){

        P[i]=j;

}
}


return 0;
}
