#include <stdio.h>
main()
{
	float a1;
	printf("実数を入れて：");
	scanf("%f", &a1);
	printf("2倍すると %.2f\n", a1 * 2);
	printf("3倍すると %.2f\n", a1 * 3);
}