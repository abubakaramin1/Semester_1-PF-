#include<stdio.h>
int main()
{
    int no;
    printf("numbers from 1 to 100 with increment of 1:\n");
    for(int no=1;no<=100;no++)
    {
        printf("%d,",no);
    }
    printf("\n");
    printf("\n");
    printf("numbers from 100 to 1 with decrement of 1:\n");
    for(int no=100;no>=1;no--)
    {
        printf("%d,",no);
    }
    printf("\n");
    printf("\n");
    printf("numbers from 20 to 2 in steps of -2:\n");
for(int no=20;no>=2;no-=2)
{
    printf("%d,",no);
}
printf("\n");
printf("\n");
printf("numbers from 2 to 20 with increment of 3:\n");
for(int no=2;no<=20;no+=3)
{
    printf("%d,", no);
}
printf("\n");
printf("\n");
printf("numbers from 99 to 0 with decrement of 11:\n");
for(int no=99;no>=0;no-=11)
{
    printf("%d,", no);
}

    return 0;
}
