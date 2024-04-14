#include <stdio.h>
#include <stdlib.h>
 int draw (int a,int b,int c,int d,int e, int f,int g,int h, int i );

int main()
{
    int draw (1,2,3,4,5,6,7,8,9);
    return 0;
}
int draw (int a,int b,int c,int d,int e, int f,int g,int h, int i)
{
    printf("%d|%d|%d|",a,b,c);
    printf("______");
     printf("%d|%d|%d|",d,e,f);
    printf("______");
     printf("%d|%d|%d|",g,h,i);
    printf("______");

    return 0;
}
