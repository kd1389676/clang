#include <stdio.h>
main()
{
	char data[] = "Apple";
	int a;
	printf("1文字ずつ表示\n");
	a = 0;
	while (data[a] != '\0') {
		printf("%c", data[a]);
		a++;
	}
	printf("\n文字列で表示\n");
	printf("%s\n", &data[0]);
}