#include<stdio.h>
int accNo,totChr;
float iniBal, totCre, lim, balance;
int main()
{
    printf("enter account number or -1:\n");
    scanf("%d",&accNo);
    while (accNo!=-1)
    {
        printf("enter initial balance:\n");
        scanf("%f",&iniBal);
        printf("enter total charges:\n");
        scanf("%d",&totChr);
        printf("enter total credits:\n");
        scanf("%f",&totCre);
        printf("enter limit:\n");
        scanf("%f",&lim);
        balance=iniBal+totChr-totCre;
        printf("%.2f\n",balance);
         printf("enter account number or -1:\n");
         scanf("%d",&accNo);
        if(balance>lim)
        {
             printf("credit limit exceeded");
        }
       else 
       {
        printf("credit limit not exceeded");
       }


    }
    return 0;
}