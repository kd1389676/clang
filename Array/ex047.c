#include <stdio.h>
main()
{
	float x[3][2], a1;
	int a, b;

	for (a = 0; a < 3; a++) {
		for (a1 = 0, b = 0; b < 2; b++) {
			printf("x [%d] [%d] = ", a, b);
			scanf("%f", &x[a][b]);
			a1 += x[a][b];
		}
		printf("%ds–Ú‚Ì•½‹Ï = %.2f\n\n", a, a1 / 2);
	}
}