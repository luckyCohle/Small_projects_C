#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NoOfItems;
    int Cost;

    int TotalAmount,Net;
    printf("Enter the number of items to be purchased\n");
    scanf("%d",&NoOfItems);
    printf("Enter the cost of item\n");
    scanf("%d,&Cost");
    Net=NoOfItems*Cost;
    if (TotalAmount>100)
    {
        printf("bat");
        TotalAmount=Net*0.9;
        printf("Gross amount is %d",TotalAmount);
    }
    printf("bat");
    return 0;
}
