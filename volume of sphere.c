#include<stdio.h>

int main()
{
    float radius , volume , pie=3.14;
    printf("enter the radius");
    scanf("%f",&radius);
    volume=4*pie*radius*radius*radius/3;
    printf("volume is%f",volume);
    return 0;
}