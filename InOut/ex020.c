#include <stdio.h>
main()
{
	char moji1;
	printf("１文字入力：");
	scanf("%c", &moji1);
	printf("入力文字＝%c", moji1-32);
}