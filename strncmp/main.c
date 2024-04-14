#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char str1[10]="my name is";
    char str2[10]="name"       ;
    int i,j,f=0;
    i=0;
    j=0;
    while(i<11){
        while (j<11){
            if (strcmp(str1[i],str2[j])==0)
            {
                f++;
            }
            j++;
            }
            i++;
            }
            if (f==4)
                printf ("found");
    return 0;
}
