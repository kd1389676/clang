#include <stdio.h>
main()
{
	char s[21], k[21];
	int i;
	printf("文字列を入力して下さい>");
	scanf("%s", &s[0]);
	printf("複合キーを入力してください＞");
	scanf("%s", &k[0]);
	while (s[i] != '\0'){
		s[i] = s[i] - (k[i]-'0');
		i++;
	}
	printf("復号化文字列は、%s\n", &s[0]);
}