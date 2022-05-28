#include <stdio.h>
#include <math.h>
int main()
{
    int no, low, high;
    printf("enter a number");
    scanf("%d", &no);
    low = -no;
    high = no;
    printf(" the low number and high number is %d  %d ", low, high);

    while (low < high)
    {
        low++;
        printf("%d", low);
    }
    return 0;
}