#include <stdio.h>
main()
{
	char tasi, hiki, kake, wari;
	int a, b, a1, b1,hako1,hako2;
	printf("���Z�q����́F");
	scanf("%d",&hako1);
	printf("�Q�̐�������́F");
	scanf("%d %d", &a, &b);
	if (hako1 == 1) {
		printf("%d", a + b);
	}
	else if (hako1 == 2) {
		printf("%d", a - b);
	}
	else if (hako1 == 3) {
		printf("%d", a * b);
	}
	else if (hako1 == 4) {
		printf("%d ���܂� %d", a / b,a % b);
	}
	else {
		printf("���̉��Z�q�͂���܂���");
	}
}