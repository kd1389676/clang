#include <stdio.h>
main()
{
	char data[] = "Apple";
	int a;
	printf("1•¶Žš‚¸‚Â•\Ž¦\n");
	a = 0;
	while (data[a] != '\0') {
		printf("%c", data[a]);
		a++;
	}
	printf("\n•¶Žš—ñ‚Å•\Ž¦\n");
	printf("%s\n", &data[0]);
}