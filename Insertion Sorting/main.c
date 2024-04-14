#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[6]={5,4,10,1,6,2};
int n=6;
int temp,i,j;
printf("unsorted loop\n");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
//sorting of array will start from here
for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0&&a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
            a[j+1]=temp;
}

printf("\n sorted array\n");
for(i=0;i<n;i++)
    printf("%d\t",a[i]);
return 0;
}
