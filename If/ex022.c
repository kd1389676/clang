#include <stdio.h>
main()
{
	int tosi;
	printf("西暦を入力：");
	scanf("%d", &tosi);
	if (1988 < tosi) {
		printf("平成生まれです\n");
	}
	else {
		printf("平成生まれではありません\n");
	}
}