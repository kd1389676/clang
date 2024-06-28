#include <stdio.h>
main()
{
	char komoji, oomoji,moji;
	printf("文字を入力：");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		printf("変換すると %c\n", moji + 32);
	}
	else if (moji >= 'a' && moji <= 'z') {
		printf("変換すると %c\n", moji - 32);
	}
	else {
		printf("エラー：アルファベットを入力してください\n");
	}
}