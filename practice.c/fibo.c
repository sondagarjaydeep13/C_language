#include <stdio.h>
int main()

{
    int i, n, sum = 0;
    printf("enter your number\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        sum = sum + i;
        printf("%d", sum);
    }
    return 0;
}