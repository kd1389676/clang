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
		printf("かいしんのいちげき！\n",crit);
	}
	else {
		printf("通常攻撃\n");
	}
}