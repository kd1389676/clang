#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int crit;
	srand(time(0));
	rand();
	crit = rand() % 100 + 1;

	if (crit <= 30) {
		printf("��������̂��������I\n",crit);
	}
	else {
		printf("�ʏ�U��\n");
	}
}