#include <stdio.h>
main()
{
	char tasi, hiki, kake, wari;
	int a, b, a1, b1,hako1,hako2;
	printf("演算子を入力：");
	scanf("%d",&hako1);
	printf("２つの整数を入力：");
	scanf("%d %d", &a, &b);
	if (hako1 == 1) {
		printf("%d", a + b);
	}
	else if (hako1 == 2) {
		printf("%d", a - b);
	}
	else if (hako1 == 3) {
		printf("%d", a * b);
	}
	else if (hako1 == 4) {
		printf("%d あまり %d", a / b,a % b);
	}
	else {
		printf("その演算子はありません");
	}
}