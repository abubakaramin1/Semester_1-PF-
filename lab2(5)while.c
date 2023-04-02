#include<stdio.h>
int main()
{
int no=1;
int counter;
printf("numbers from 1 to 100 with increment of 1:\n");

while(no<=100)
{
    printf("%d,",no);
    no++;
}

    printf("numbers from 100 to 1 with decrement of 1:\n");
    no=100;
while(no>=1)
{
    printf("%d,",no);
    no--;
}


    printf("numbers from 20 to 2 in steps of -2:\n");
    no=20;
    while (no>=2)
    {
        printf("%d,",no);
        no-=2;
    }
    
    
printf("numbers from 2 to 20 with increment of 3:\n");
no=2;
while(no<=20)
{
    printf("%d,",no);
    no+=3;
}
printf("numbers from 99 to 0 with decrement of 11:\n");
no=99;
while(no>=1)
{
    printf("%d,",no);
    no-=11;
}

    return 0;
}
