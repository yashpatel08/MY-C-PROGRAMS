#include<stdio.h>

int main()
{
int fare,cels;
printf("Enter the temperature in fahrenheit");
scanf("fahrenheit=%d",&fare);
cels=(fare - 32)*1.8;
printf("the temperature in celsius is %d",cels);

return 0;
}
