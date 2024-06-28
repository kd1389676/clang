#include <stdio.h>
main()
{
	int tosi,sum;
	printf("¼—ï‚ğ“ü—ÍF");
	scanf("%d", &tosi);
	sum = tosi % 4;
	if (sum == 0) {
		printf("‚¤‚é‚¤”N‚Å‚·");
	}
	else {
		printf("‚¤‚é‚¤”N‚Å‚Í‚ ‚è‚Ü‚¹‚ñ");
	}
}