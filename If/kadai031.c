#include <stdio.h>
main()
{
	float i, a;
	printf("2�̎����l�H");
	scanf("%f %f", &i, &a);
	if (i < a) {
		printf("�傫���ق��� = %f", a);
	}
	else
	{
		printf("�傫���ق��� = %f", i);
	}
}