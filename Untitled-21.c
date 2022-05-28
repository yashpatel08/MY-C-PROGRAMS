#include <stdio.h>

int main()
{
    int i, no, sum = 0;
    float avg = 0;
    printf("enter the 10 numbers: \n ");
    for (i = 1; i <= 10; i++)
    {
        printf("number-%d", i);
        scanf("\n%d", &no);
        sum += no;
    }
    printf("\n%d", sum);

    avg = sum / 10;
    printf("%f", avg);
    return 0;
}