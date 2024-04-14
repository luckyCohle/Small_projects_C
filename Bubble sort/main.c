#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={51,33,45,7,3,100,20,15,70,9};
    int i,t,j;
    printf("unsorted array\n");
    for (i=0;i<10;i++) {
        printf("%d \t",a[i]);
    }
    for (i=0;i<10;i++)
    {
        for (j=0;j<9;j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\nsorted array\n");
    for(i=0;i<10;i++)
        printf("%d \t",a[i]);
    return 0;
}
