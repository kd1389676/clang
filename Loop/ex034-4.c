#include <stdio.h>
main()
{
	int i , j, su;
	printf("”‚ÍH");
	scanf("%d", &su);
	i = 1;
	do {
		j = 0;
		do {
			printf(" ");
			j++;
		} while (j <= su - i);
		j = 0;
		do {
			printf("*");
			j++;
		} while (j > i);
		printf("\n");
		i++;
	} while (i <= su);
}