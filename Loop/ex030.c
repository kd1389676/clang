#include <stdio.h>
main()
{
	int cnt, suu;
	cnt = 0;
	printf("�������āF");
	scanf("%d", &suu);
	while (cnt != 11) {
		printf("%d + %d = %d \n", suu, cnt, suu + cnt);
		cnt += 1;
	}
}