#include<stdio.h>

int main()
{
	int a = 4;
	float b; // cambiar a int
	// Operación: -2 * -5. / a++ - 5
	b = -2 * -5. / a++ - 5;
	printf("-2 * -5 / a++ - 5 = %.1f\n\n", b);

	// Operación: 6 / 2 * 5 + 4 - 6
	printf("6 / 2 * 5 + 4 - 6 = %d\n\n", 6 / 2 * 5 + 4 - 6);
	
	// Operación: 6 / (2 * (5 + (4 - 6)))
	printf("6 / (2 * (5 + (4 - 6))) = %d\n\n", 6 / (2 * (5 + (4 - 6))) );

	return 0;
}