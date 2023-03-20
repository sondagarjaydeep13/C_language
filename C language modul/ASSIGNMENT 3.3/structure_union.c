#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "finding digits where there could be digit 5236 is amazing";
	char digits[] = "0123456789";
	char *ptr = strpbrk(str, digits);

	if (ptr != NULL) /* Expected character is found */
	{
		printf("'%s' contains at least one character from '%s'\n", str, digits);
	}
	else /* Expected character isn't found */
	{
		printf("'%s' doesn't contain any character from '%s'\n", str, digits);
	}

	return 0;
}