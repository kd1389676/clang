#include <stdio.h>
main()
{
	int seisuu;
	printf("整数？");
	scanf("%d", &seisuu);
	if (seisuu % 2 == 0) {
		printf("その数は「偶数」です");
	}
	else {
		printf("その数は「奇数」です");
	}
}