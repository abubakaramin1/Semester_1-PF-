#include<stdio.h>
int main(void)
{
    int maritalStatus,gender,age;
    /* unmarried=0, married=1   male=0,female=1     above 25=0,above 30=1*/
    printf("enter marital status:\n");
    scanf("%d",&maritalStatus);
    printf("enter gender:\n");
    scanf("%d",&gender);
    printf("enter age:\n");
    scanf("%d",&age);
    if (maritalStatus==1)
        printf("the driver is insured!");
    else if (maritalStatus==0 && gender==0 && age==1)
        printf("the driver is insured!");
    else if (maritalStatus==0 && gender==1 && age==0)
        printf("the driver is insured!");
    else
        printf("the driver is not insured!");
    return 0;

}
