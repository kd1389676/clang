#include <stdio.h>
main()
{
	int a, b, c,i;
	a = 0;
	b = 0;
	for (i = 1; i <= 10; i++) {
		a += i;
		printf(" 1から %d までの和 = %d\n",i, a);
	}
}