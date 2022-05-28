#include<stdio.h>

int table(int n);

int main()
{
    int n,i,table;
    printf("enter the number");
    scanf("%d",n);
   printf("table %d",table);
    return 0;

}
int table(int n)
{
   /* int i;
    for(i=0;i<=10;i++)
    {
        printf("%d*%d=%d",n,i,table);
    
    }
    return 0;
}*/
  
  
  
   int i,table;
    
for(i=1;i<=10;i++)
{
   table=n*i;
   printf("%d*%d=%d", n,i,table);
    return table;
}
}