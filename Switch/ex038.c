#include <stdio.h>
main()
{
	int a;
	printf("��������́F");
	scanf("%d", &a);
	if (a >= 10 && a <= 49) {
		switch (a/10) {
		case 1:
			printf("�P�O�_��\n");
			break;
		case 2:
			printf("�Q�O�_��\n");
			break;
		case 3:
			printf("�R�O�_��\n");
			break;
		case 4:
			printf("�S�O�_��\n");
			break;
		}
	}
	else
		printf("�G���[�F�P�O�`�S�X�̒l����͂��Ă�������\n");
}