# include<stdio.h>
int main(void)
{
    int base, height, thirdSide, perimeter;
    float totalArea;
    printf("enter base:\n");
    scanf("%d",&base);
    printf("enter height\n");
    scanf("%d",&height);
    printf("enter third side\n");
    scanf("%d", &thirdSide);
    totalArea = 0.5*base*height;
    printf("total area is :%f\n", totalArea);
    perimeter = base + height + thirdSide;
    printf("perimeter is %d\n", perimeter);
    return 0;
}
