#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int Array [6] ={4,7,3,8,5,6};
    int n=6;
    int i,j,min,t;
    printf("unsorted array\n");
    for(i=0;i<6;i++){
        printf("%d \t",Array[i]);
    }


    for(i=0;i<n-1;i++)
    {
    min=i;
        for(j=i+1;j<n;j++)
        {


        if(Array[j]<Array[min])
        {
            min=j;
        }
            }if(min!=i)
            {
              t=Array[i];
              Array[i]=Array[min];
              Array[min]=t;

            }
        }

            printf("\n sorted array\n");
             for(i=0;i<6;i++){
        printf("%d \t",Array[i]);
    }


    return 0;
}
