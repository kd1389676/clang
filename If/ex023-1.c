#include <stdio.h>
main()
{
	int sec, m, h, hako1, hako2;
	printf("秒数を入力：");
	scanf("%d", &hako1);
	if (hako1 > 5000) {
		printf("エラー：5000以上は受け付けていません。\n");
	}
	else if(hako1 >= 0){
		sec = hako1 % 60;
		hako2 = hako1 / 60;
		h = hako2 / 60;
		m = hako2 % 60;
		printf("%d時間%d分%d秒です\n", h, m, sec);
	}
	else {
		printf("マイナスはエラーです\n");
	}
}