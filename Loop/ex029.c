#include <stdio.h>
main()
{
	int a, cnt;
	cnt = 0;
	printf("数を入れて：");
	scanf("%d", &a);
	while (cnt != a) {
		cnt += 1;
		printf("*");
	}
	printf("\n");
}