#include <stdio.h>
main()
{
	int a, hako;
	printf("0から100までの整数？");
	scanf("%d",&hako);
	if (hako >= 90) {
		printf("その数値の判定結果は「5」です");
	}
	else if (hako >= 80) {
		printf("その数値の判定結果は「4」です");
	}
	else if (hako >= 50) {
		printf("その数値の判定結果は「3」です");
	}
	else if (hako >= 30) {
		printf("その数値の判定結果は「2」です");
	}
	else {
		printf("その数値の判定結果は「1」です");
	}
}