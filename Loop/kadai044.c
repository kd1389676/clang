#include<stdio.h>
main()
{
	int zyuu;
	zyuu = 0;
	while (zyuu != -999) {
		printf("����(-999 �œ��͏I��)�H");
		scanf("%d", &zyuu);
		if(zyuu == -999) {
			break;
		}
			printf("8�i�� = %o\t", zyuu);
			printf("16�i�� = %X \n", zyuu);
	}
}