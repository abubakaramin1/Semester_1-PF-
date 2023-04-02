#include<stdio.h>
int main(void)
{
int no,max,min,i;
printf("enter number:\n");
scanf("%d",&no);
max=min=no;
for(i=1;i<=4;i++)
{
    scanf("%d",&no);
    if(no>max)
        max=no;

    if(no<max)
        min=no;

}
printf("maximum number:%d\n",max);
printf("minimum number:%d\n",min);
return 0;


}
