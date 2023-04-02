#include <stdio.h>
int no,i=1000,div,mod;
int main()
{
    printf("enter number:\n");
    scanf("%d",&no);
    while(no!=0)
    {
       div=no/i;
       i=i/10;
       mod=div%10;
       printf("%d%3s",mod);
    }
     
    return 0;
}