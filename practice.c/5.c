#include <stdio.h>

int main()
{
    int Rows, i, j;

    printf("Please Enter the Number of Rows:  ");
    scanf("%d", &Rows);

    printf("\nPrinting Right Angled Triangle \n \n");
    for (i = 1; i <= Rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d %d ", 1);
        }
        printf("\n");
    }
    return 0;
}