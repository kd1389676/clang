#include <stdio.h>
main()
{
	int a;
	printf("整数を入力：");
	scanf("%d", &a);
	if (a >= 10 && a <= 49) {
		switch (a/10) {
		case 1:
			printf("１０点台\n");
			break;
		case 2:
			printf("２０点台\n");
			break;
		case 3:
			printf("３０点台\n");
			break;
		case 4:
			printf("４０点台\n");
			break;
		}
	}
	else
		printf("エラー：１０〜４９の値を入力してください\n");
}