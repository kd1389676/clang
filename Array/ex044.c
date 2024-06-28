#include <stdio.h>
main()
{
	char moji1[100], moji2[100], a[100];
	int i;

	printf("•¶š—ñ‚P‚ğ“ü—ÍF");
	scanf("%s", &moji1[0]);

	printf("•¶š—ñ‚Q‚ğ“ü—ÍF");
	scanf("%s", &moji2[0]);

	printf("moji1 = %s \t moji2 = %s\n", &moji1, &moji2);
	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");
	for (i = 0; a[i] = moji1[i]; i++);
	for (i = 0; moji1[i] = moji2[i]; i++);
	for (i = 0; moji2[i] = a[i]; i++);
	printf("moji1 = %s \t moji2 = %s\n", &moji1[0], &moji2[0]);
}