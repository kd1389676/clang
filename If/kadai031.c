#include <stdio.h>
main()
{
	float i, a;
	printf("2つの実数値？");
	scanf("%f %f", &i, &a);
	if (i < a) {
		printf("大きいほうは = %f", a);
	}
	else
	{
		printf("大きいほうは = %f", i);
	}
}