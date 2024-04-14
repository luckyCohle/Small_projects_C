#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a='*';
    for (int i=1;i<20;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}
