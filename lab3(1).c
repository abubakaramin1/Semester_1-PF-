#include <stdio.h>
float litres, km, litPerKm, sum=0,counter=0,average;
int main()


{
    printf("enter litres or -1:\n");
        scanf("%f",&litres);
       
    while (litres!=-1)
    {
         printf("enter kilometers:\n");
        scanf("%f",&km);
        
        litPerKm=(litres/km)*100;
        printf("the litres/100km for this tank was:%.1f\n",litPerKm);
        sum+=litPerKm;
        
        counter++;
        printf("enter litres or -1:\n");
        
        scanf("%f",&litres);

       
        
    }
    if (counter !=0)
    {
    average= sum / (counter);
printf("the average is:%.1f",average); }
else

printf("no data entered.");

    
return 0;

}

