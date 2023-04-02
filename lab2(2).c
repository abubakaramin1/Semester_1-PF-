#include<stdio.h>
int main(void)
{
    int quantity, PricePerItem;
    float TotalExpenses,total;
    printf("enter quantity:\n");
    scanf("%d",&quantity);
    printf("enter price per item:\n");
    scanf("%d",&PricePerItem);

    if (quantity>1000)
       {
total=quantity*PricePerItem;
TotalExpenses=total-0.1*total;
        printf("total expenses are:%f\n",TotalExpenses);
        }
        else
        {TotalExpenses=quantity*PricePerItem;
            printf("total expenses are:%f\n", TotalExpenses);}

            return 0;

}
