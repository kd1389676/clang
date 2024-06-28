#include <stdio.h>
main()
{
	float a1, a2, a3, g1;
	printf("1つ目の実数：");
	scanf("%f", &a1);
	printf("2つ目の実数：");
	scanf("%f", &a2);
	printf("3つ目の実数：");
	scanf("%f", &a3);
	g1 = a1 + a2 + a3;
	printf("合計= %.2f 平均= %.2f", a1 + a2 + a3, g1 / 3);
}