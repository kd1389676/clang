#include <stdio.h>
main()
{
	int sec, m, h;
	printf("�b������́F");
	scanf("%d", &sec);
	if(sec <= 5000){
		h = sec / 3600;
		sec = sec % 3600;
		m = sec / 60;
		sec = sec % 60;
		printf("%d����%d��%d�b�ł�\n", h, m, sec);
	}
	else {
		printf("�G���[�F5000�ȉ��œ��͂��Ă�������\n");
	}
}