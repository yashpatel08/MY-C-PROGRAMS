#include<stdio.h>

int main()
{
int n ,count=0,i;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
        if(n%i!=0)
        {
        printf("\n the number is prime number ");
        }
        else
        {
            printf("\n the number is not a prime number ");
        }
    }
    
 return 0;
}