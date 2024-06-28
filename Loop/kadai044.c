#include<stdio.h>
main()
{
	int zyuu;
	zyuu = 0;
	while (zyuu != -999) {
		printf("整数(-999 で入力終了)？");
		scanf("%d", &zyuu);
		if(zyuu == -999) {
			break;
		}
			printf("8進数 = %o\t", zyuu);
			printf("16進数 = %X \n", zyuu);
	}
}