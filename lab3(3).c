#include <stdio.h>
int no=1, product=1;
int main()
{
    while (no<=19)
    {
        printf("the numbers are:%d\n", no);
        product*=no;
        no+=2;
    }
    printf("the product is :%d\n", product);
    return 0;
}