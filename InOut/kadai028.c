#include <stdio.h>
main()
{
	long seisu;
	printf("整数？");
	scanf("%l", &seisu);
	printf("2倍すると %ld", seisu * 2);
	printf("3倍すると %ld", seisu * 3);
	printf("4倍すると %ld", seisu * 4);
}