#include <stdio.h>
#include <string.h>
main()
{
	char str[] = "orange";
	int cnt;
	cnt = 0;
	while (str[cnt] != '\0') {
		cnt++;
	}
	printf("������:%s\n", &str[0]);
	printf("�������� %d ����\n", cnt);
	printf("�������� %d ����\n", strlen(str));
}