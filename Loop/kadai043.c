#include <stdio.h>
main()
{
	int moji;
	moji = 0;
	while (moji != -1) {
		printf("�����R�[�h�i-1�œ��͏I��)�H");
		scanf("%d", &moji);
		if (moji == -1) {
			break;
		}
		else {
			printf("%c\n", moji);
		}
	}
}