#include<stdio.h>

int main()
{
int array[10];
int i;
printf("enter the 10 numbers ");
for(i=0;i<10;i++)
{
    printf("element-%d",i);
    scanf("%d", &array[i]);
  }  printf("elements in array are-");
        for(i=0;i<10;i++)
        {
            printf("\n%d",array[i]);
        }

            printf("\n%d",array[i]);
return 0;    
}