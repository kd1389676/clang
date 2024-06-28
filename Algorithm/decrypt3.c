#include <stdio.h>
main()
{
	char s[21], k[21];
	int i;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢>");
	scanf("%s", &s[0]);
	printf("•¡‡ƒL[‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &k[0]);
	while (s[i] != '\0'){
		s[i] = s[i] - (k[i]-'0');
		i++;
	}
	printf("•œ†‰»•¶š—ñ‚ÍA%s\n", &s[0]);
}