#include <stdio.h>
main()
{
	int i;
	float a,b[3],k;
	a = 0; k = 0;
	for (i = 0; i < 3; i++) {
		printf("��������́F");
		scanf("%f", &b[i]);
		k += b[i];
	}
	
	printf("���v�� %.2f �ł�\n���ς�%.2f�ł�", k,k/i);
}