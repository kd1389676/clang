#include <stdio.h>
main()
{
	int a;
	char moji;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &moji);

	if ((moji >= 'a') && (moji <= 'z')) {
		printf("���̕����́u�������v�ł�");
	}
	else if ((moji >= 'A') && (moji <= 'Z')) {
		printf("���̕����́u�啶���v�ł�");
	}
	else {
		printf("���̑��̕����ł�");
	}
}