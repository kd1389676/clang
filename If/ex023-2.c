#include <stdio.h>
main()
{
	int tosi,sum;
	printf("西暦を入力：");
	scanf("%d", &tosi);
	sum = tosi % 4;
	if (sum == 0) {
		printf("うるう年です");
	}
	else {
		printf("うるう年ではありません");
	}
}