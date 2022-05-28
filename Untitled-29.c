#include<stdio.h>

int main()
{
    int n[5],i,(n+i);

    printf("enter the number");
    scanf("%d",&n);
      for(i=0;i<n;i++)
    {
         printf("%d",i);
         scanf("%d",& n+i);
    }
        printf("the elements you enter is: %d",(n+i));
        for(i=0;i<n;i++)
        {
            printf("%d-%d",i,*(n+i));
        }
return 0;
}