#include <stdio.h>
#include <stdlib.h>

int main()
{
 int sample=23;
 int *psample=NULL;
 psample=&sample;
 printf("vlaue of sample is %d\n",sample);
 printf("address of sample is %d\n",&sample);
 printf("value stored in  pointer is %u\n",psample);
 printf("pointer is pointing toward %d",*psample);
    return 0;
}
