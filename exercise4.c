# include<stdio.h>
int main(void)
{
    int a, b, c;
    printf("first number:\n");
    scanf("%d", &a);
    printf("second number:\n");
    scanf("%d", &b);
    printf("before swap:%d%d\n", a,b);

    c=a;
    a=b;
    b=c;
    printf("after swap:%d%d", a , b);
    a = a + b;
    b = a - b;
    a = b - a;
    return 0;
}
