#include <stdio.h>
main()
{
	int i;
	float a,b[3],k;
	a = 0; k = 0;
	for (i = 0; i < 3; i++) {
		printf("実数を入力：");
		scanf("%f", &b[i]);
		k += b[i];
	}
	
	printf("合計は %.2f です\n平均は%.2fです", k,k/i);
}