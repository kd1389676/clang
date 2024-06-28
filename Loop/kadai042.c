#include <stdio.h>
main()
{
	int a, i;
	a = 0;
	i = 0;
	while (a != 300) {
		i++;
		a = a + i;
		printf("%d+",i);
	}
	i++;
	printf("%d=%d", i, a+i);
}