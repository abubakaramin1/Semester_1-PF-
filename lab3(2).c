#include <stdio.h>
int no=0, sum=0;
int main()
{
    while(no<=30)
    {
    
    printf("the numbers are:%d\n",no);
    sum+=no;
    no+=2;
    
    }
    
    printf("the sum is:%d\n",sum);
}