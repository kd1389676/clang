#include <stdio.h>
main()
{
	int a;
	float b, c, d, e,f;
	c = 0;
	d = 0;
	b = 0;
	for (a = -1; b != -999; a++) {
		d = b;
		printf("���́H ");
		scanf("%f", &b);
		c = c + d;
	}
	f = c / a;
	printf("���v= %.0f   ����= %.2f", c, f);
}