#include <stdio.h>
main()
{
	int a, cnt;
	cnt = 0;
	printf("�������āF");
	scanf("%d", &a);
	while (cnt != a) {
		cnt += 1;
		printf("*");
	}
	printf("\n");
}