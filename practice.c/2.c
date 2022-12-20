#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    float average;

    printf("enter your 10 number : \n");
    for (i = 1; i < 11; i++)
    {
        printf("number : %d ", i);
        scanf("%d", &n);
        sum = sum + n;
    }
    average = sum / 10.0;
    printf("\nyour sum is : %d\n your average is : %f", sum, average);

    return 0;
}
