#include <stdio.h>
main()
{
	int i;
	float a,b[3],k;
	a = 0; k = 0;
	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—ÍF");
		scanf("%f", &b[i]);
		k += b[i];
	}
	
	printf("‡Œv‚Í %.2f ‚Å‚·\n•½‹Ï‚Í%.2f‚Å‚·", k,k/i);
}