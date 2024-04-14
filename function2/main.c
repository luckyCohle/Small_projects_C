#include<stdio.h>
int hcf (int a,int b);
int main()
{ hcf (8,4);
    return 0;
}
int hcf(int a, int b)
{
    int c=1,e;
    while (c<=a||c<=b){
        if (a%c==0&&b%c==0)
        e=c;
        c++;}
  printf("hcf is %d",e);
}
