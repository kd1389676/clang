#include <stdio.h>
main()
{
	FILE* fp;
	char str[256];
	int lv, hp;
	fp = fopen("file02.txt", "r");
	fscanf(fp, "%s", str);
	fprintf("õF%s\n", str);
	fscanf(fp, "%s", str);
	fprintf("õF%s\n", str);
	fscanf(fp, "%s", str);
	fprintf("õF%s\n", str);
	fscanf(fp, "%d%d%s", &lv, &hp, str);
	fprintf("lvF%d hpF%d õF%s\n", lv, hp, str);
	fclose(fp);
}