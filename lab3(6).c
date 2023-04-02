#include<stdio.h>
float sales, salary;

int main()
{
    printf("enter sales or -1 to end:\n");
    scanf("%f", &sales);
    while(sales!=-1)
    {
        salary = 200+0.09*sales;
        printf("the salary is %.2f\n", salary);
        printf("enter sales or -1 to end:\n");
        scanf("%f", &sales);
    }
return 0;
}