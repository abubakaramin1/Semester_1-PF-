#include<stdio.h>
#include<math.h>

int no, baseNo, baseCon, remain,position=0,sum=0;
int main()
{
    printf("enter number:\n");
    scanf("%d",&no);
    printf("enter base of this number:\n");
    scanf("%d",&baseNo);
    printf("enter base of number system in which it is to be converted:\n");
    scanf("%d",&baseCon);
    while(no!=0)
    {
        remain=no%10;
        if(remain>=baseNo)
        {
            printf("enter another number:\n");
            scanf("%d",&no);
        }
        else
        {
            remain=remain*pow(baseNo,position);
        }
        printf("%d\n",remain);
        no=no/10;
        position++;
        sum+=remain;

    }
printf("the number in %d number system is %d",baseCon,sum);

return 0;
}
