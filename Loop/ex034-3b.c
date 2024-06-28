#include <stdio.h>
main()
{
	int i , l, su;
	printf("”‚ÍH");
	scanf("%d", &su);
	i = 1;
	do {
		l = 0;
		do {
			printf("*");
			l++;
		} while (l < i);
		printf("\n");
		i++;
	} while (i > su);
}