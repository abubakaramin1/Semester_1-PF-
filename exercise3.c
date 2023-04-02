# include<stdio.h>
int main(void)
{
    int a, b;
    int result;
    printf("enter first number\n");
    scanf("%d", &a);

    printf("enter second number\n");
    scanf("%d", &b);


    result = a + b;
     printf("sum is :%d\n" ,result);


     result = a - b;
     printf("difference is :%d\n", result);

     result = a * b;
     printf("product is :%d\n", result);

     result = a/b;
     printf("division is :%d\n" , result);

     result = a%b;
     printf("remainder is :%d",result);
     return 0;

}
