#include<stdio.h>
int no, fac;
int main()
{
    printf("enter number:\n");
    scanf("%d", &no);
    for(int no;no>=1;no--)
    {
        fac=no*no;
        printf("%d\n",fac);
    }
return 0;

}