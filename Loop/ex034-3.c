#include <stdio.h>
main()
{
	int i , save;
	int l = 1;
	printf("”‚ÍH");
	scanf("%d", &i);
	save = i + 1;
	do {
		l = 0;
		do {
			printf("*");
			l++;
		} while (l < save - i);
		printf("\n");
		i--;
	} while (i > 0);
}