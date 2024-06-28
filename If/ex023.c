#include <stdio.h>
main()
{
	int sec, m, h;
	printf("秒数を入力：");
	scanf("%d", &sec);
	if(sec <= 5000){
		h = sec / 3600;
		sec = sec % 3600;
		m = sec / 60;
		sec = sec % 60;
		printf("%d時間%d分%d秒です\n", h, m, sec);
	}
	else {
		printf("エラー：5000以下で入力してください\n");
	}
}