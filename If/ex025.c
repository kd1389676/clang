#include <stdio.h>
main()
{
	char moji1, moji2;
	int a, b, c;
	printf("��������́F");
	scanf("%c", &moji1);
	if (moji1 >= 'A' && moji1 <= 'z') {
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else if(moji1 >= '0' && moji1 <= '9'){
		printf("�����ł�\n");
	}
	else {
		printf("���̑��̕����ł�\n");
	}
}