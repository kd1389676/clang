#include <stdio.h>
main()
{
	int i;
	int l = 5;
	printf("”‚ÍH");
	scanf("%d", &i);
	do {
		do {
			printf("*");
			l--;
		} while (l > 0);
		printf("\n");
		i--;
		l = 5;
	} while (i > 0);
}