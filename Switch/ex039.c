#include <stdio.h>
main()
{
	int a, b, c, d, e;
	char f;
	printf("処理を入力：");
	scanf("%c", &f);
	printf("整数を入力：");
	scanf("%d %d %d", &a, &b, &c);
	switch (1) {
	case 'd','D':
		if (a > b) {
			if (a > c) {
				printf("最大値は%dです", a);
			}
		}
		else if (b > c) {
			printf("最大値は%dです", b);
		}
		else {
			printf("最大値は%dです", c);
		}
	case 's', 'S':
		if (a < b) {
			if (a < c) {
				printf("最小値は%dです", a);
			}
		}
		else if (b < c) {
			printf("最小値は%dです", b);
		}
		else {
			printf("最小値は%dです", c);
		}
	case 'g', 'G':
		printf("合計は%dです", a + b + c);
	case 'h', 'H':
		printf("平均は%dです", (a + b + c) / 3);
	}
}