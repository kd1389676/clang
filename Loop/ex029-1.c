#include <stdio.h>
main()
{
	int a, b;
	b = 0;
	printf("数を入れて：");
	scanf("%d", &a);
	while (a != 0) {
		a -= 1;
		printf("*");
	}
	printf("\n");
}