#include <stdio.h>
main()
{
	float a1, a2, a3, g1;
	printf("1�ڂ̎����F");
	scanf("%f", &a1);
	printf("2�ڂ̎����F");
	scanf("%f", &a2);
	printf("3�ڂ̎����F");
	scanf("%f", &a3);
	g1 = a1 + a2 + a3;
	printf("���v= %.2f ����= %.2f", a1 + a2 + a3, g1 / 3);
}