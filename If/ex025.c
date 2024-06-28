#include <stdio.h>
main()
{
	char moji1, moji2;
	int a, b, c;
	printf("文字を入力：");
	scanf("%c", &moji1);
	if (moji1 >= 'A' && moji1 <= 'z') {
		printf("アルファベットです\n");
	}
	else if(moji1 >= '0' && moji1 <= '9'){
		printf("数字です\n");
	}
	else {
		printf("その他の文字です\n");
	}
}