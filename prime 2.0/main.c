#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=0;
    int t,p;
    printf("enter the number\n ");
    scanf("%d",&number);
    if(number==1)
    {
        printf("neither prime nor composite\n");
    }
    for( p=2;p<number;p++)
    {
        t=number%p;
        if(t==0)
        {
            printf("%d is a composite number\n",number);
            break;
        }

}
if (number==p)
printf("%d is a prime number\n",number);
                return 0;
}
