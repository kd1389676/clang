#include <stdio.h>
main()
{
	int a, hako;
	printf("0����100�܂ł̐����H");
	scanf("%d",&hako);
	if (hako >= 90) {
		printf("���̐��l�̔��茋�ʂ́u5�v�ł�");
	}
	else if (hako >= 80) {
		printf("���̐��l�̔��茋�ʂ́u4�v�ł�");
	}
	else if (hako >= 50) {
		printf("���̐��l�̔��茋�ʂ́u3�v�ł�");
	}
	else if (hako >= 30) {
		printf("���̐��l�̔��茋�ʂ́u2�v�ł�");
	}
	else {
		printf("���̐��l�̔��茋�ʂ́u1�v�ł�");
	}
}