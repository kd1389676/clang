#include <stdio.h>
main()
{
	int a, b;
	a = 0; b = 0;
	while (1) {
		printf("�������āF");
		scanf("%d", &a);
		if (a == -999) break;

		b += a;
	}
	printf("���v= %d", b);
}