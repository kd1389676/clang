#include <stdio.h>
main()
{
	int a, b, c, d, e;
	char f;
	printf("��������́F");
	scanf("%c", &f);
	printf("��������́F");
	scanf("%d %d %d", &a, &b, &c);
	switch (1) {
	case 'd','D':
		if (a > b) {
			if (a > c) {
				printf("�ő�l��%d�ł�", a);
			}
		}
		else if (b > c) {
			printf("�ő�l��%d�ł�", b);
		}
		else {
			printf("�ő�l��%d�ł�", c);
		}
	case 's', 'S':
		if (a < b) {
			if (a < c) {
				printf("�ŏ��l��%d�ł�", a);
			}
		}
		else if (b < c) {
			printf("�ŏ��l��%d�ł�", b);
		}
		else {
			printf("�ŏ��l��%d�ł�", c);
		}
	case 'g', 'G':
		printf("���v��%d�ł�", a + b + c);
	case 'h', 'H':
		printf("���ς�%d�ł�", (a + b + c) / 3);
	}
}