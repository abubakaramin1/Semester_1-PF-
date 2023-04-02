#include<stdio.h>
int main()
{

    int counter=1;
    int year=1;
    float inv=1000;
    printf("Year\t\tAmount on deposit\n");
    while(counter<=10 && year<=10)
    {
        inv+=inv*0.05;
        printf("%d\t\t%.2f\n",year,inv);
        counter++;
        year++;
    }
    return 0;
}
