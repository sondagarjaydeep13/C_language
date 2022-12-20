#include <stdio.h>
int main()
{
    int i, a, b;
    printf(" the multiplication table is 1: ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        printf("\nmultiplication table no is %d\n", i);
        for (b = 1; b < 11; b++)
        {
            printf("\n%d*%d=%d", i, b, i * b);
        }
    }

    return 0;
}