#include <stdio.h>
main()
{
	int a, b, c;
	printf("数を入れて：");
	scanf("%d", &a);
	for (c = 1; c <= 5; c++) {
		b = a * c;
		printf("%d ", b);
	}
}