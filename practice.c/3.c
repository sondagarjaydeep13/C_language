#include <stdio.h>
int main()
{
    int i, a;
    printf("enter your number : ");
    scanf("%d", &a);
    for (i = 1; i < 11; i++)
    {
        printf("%d*%d=%d\n", a, i, a * i);
    }

    return 0;
}