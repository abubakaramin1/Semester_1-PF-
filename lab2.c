#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    float total,percentage;

    printf("enter marks of subject1:\n");
    scanf("%d",&sub1);

    printf("enter marks of subject2:\n");
    scanf("%d",&sub2);

    printf("enter marks of subject3:\n");
    scanf("%d",&sub3);

    printf("enter marks of subject4:\n");
    scanf("%d",&sub4);

    printf("enter marks of subject5:\n");
    scanf("%d",&sub5);

    total=sub1+sub2+sub3+sub4+sub5;
    printf("total is :%f\n",total);

    percentage=total/500*100;
    printf("percentage is :%f\n",percentage);

    if (percentage>=90)
        printf("grade is A\ncredit points are 4.0\n");

    else if(percentage<=89 && percentage>=85)
        printf("grade is A-\ncredit points are 3.7\n");

    else if(percentage<=84 && percentage>=80)
        printf("grade is B+\ncredit points are 3.3\n");

    else if(percentage<=79 && percentage>=75)
        printf("grade is B\ncredit points are 3.0\n");

    else if (percentage <=74 && percentage >=70)
        printf("grade is B-\ncredit points are 2.7\n");

    else if (percentage<=69 && percentage >=65)
        printf("grade is C+\ncredit points are 2.3 \n");

    else if (percentage<=64 && percentage>=60)
        printf("grade is C\ncredit points are 2.0\n");

    else if (percentage<=59 && percentage>=55)
        printf("grade is C-\ncredit points are 1.7\n");

    else if (percentage<=54 && percentage>=50)
        printf("grade is D\ncredit points are 1.3\n");

    else
        printf("grade is F\ncredit points are 0.0\n");



    return 0;



}
