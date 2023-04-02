#include<stdio.h>
int main()
{
    int i=1,counter=1;
    for(int i=1;counter<=10;counter++)
    {
        printf("enter number:\n");
        scanf("%d",&i);
        if(i%2==0)
        {
            printf("number is a multiple of 2\n");
        }
        if(i%3==0)
        {
            printf("number is a multiple of 3\n");
        }
        if (i%2!=0 && i%3!=0)
        {
            printf("number is neither a multiple of 2 nor 3\n");
        }

    }
    return 0;
}
