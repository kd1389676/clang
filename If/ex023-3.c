#include <stdio.h>
main()
{
	char tasi, hiki, kake, wari;
	int a, b, a1, b1,hako1,hako2;
	printf("‰‰Zq‚ğ“ü—ÍF");
	scanf("%d",&hako1);
	printf("‚Q‚Â‚Ì®”‚ğ“ü—ÍF");
	scanf("%d %d", &a, &b);
	if (hako1 == 1) {
		printf("%d", a + b);
	}
	else if (hako1 == 2) {
		printf("%d", a - b);
	}
	else if (hako1 == 3) {
		printf("%d", a * b);
	}
	else if (hako1 == 4) {
		printf("%d ‚ ‚Ü‚è %d", a / b,a % b);
	}
	else {
		printf("‚»‚Ì‰‰Zq‚Í‚ ‚è‚Ü‚¹‚ñ");
	}
}