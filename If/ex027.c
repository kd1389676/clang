#include <stdio.h>
main()
{
	char komoji, oomoji,moji;
	printf("��������́F");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		printf("�ϊ������ %c\n", moji + 32);
	}
	else if (moji >= 'a' && moji <= 'z') {
		printf("�ϊ������ %c\n", moji - 32);
	}
	else {
		printf("�G���[�F�A���t�@�x�b�g����͂��Ă�������\n");
	}
}