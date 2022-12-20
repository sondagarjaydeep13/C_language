#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("enter your number : ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("your total sum is %d", sum);
    return 0;
}