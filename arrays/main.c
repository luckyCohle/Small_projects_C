#include <stdio.h>
int main()
{
int grades[10];
float average;
int i,s;
float sum=0;
printf("enter the grades\n");
for(i=0;i<10;i++)
{
s=i+1;

    printf("%d>\n",s);
    scanf("%d",&grades[i]);
    sum=sum+grades[i];

}
average=sum/10;
printf("average of grades is %f",average);
return 0;
}
