#include <stdio.h>
main()
{
	int moji;
	moji = 0;
	while (moji != -1) {
		printf("文字コード（-1で入力終了)？");
		scanf("%d", &moji);
		if (moji == -1) {
			break;
		}
		else {
			printf("%c\n", moji);
		}
	}
}