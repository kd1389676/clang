#include <stdio.h>
main()
{
	FILE* fp;
	char str[256];
	int lv, hp;
	fp = fopen("file02.txt", "r");
	fscanf(fp, "%s", str);
	fprintf("装備：%s\n", str);
	fscanf(fp, "%s", str);
	fprintf("装備：%s\n", str);
	fscanf(fp, "%s", str);
	fprintf("装備：%s\n", str);
	fscanf(fp, "%d%d%s", &lv, &hp, str);
	fprintf("lv：%d hp：%d 装備：%s\n", lv, hp, str);
	fclose(fp);
}