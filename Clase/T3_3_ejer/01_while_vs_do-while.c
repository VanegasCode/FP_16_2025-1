#include <stdio.h>
int main()
{
	char c;

	printf("- Uso de WHILE -\n");
	printf("Ingresa un caracter: ");
	scanf("%s", &c);
	printf("c= %c\n", c);
	while (c != 'e') 
	{
		
		printf("Ingresa un caracter: ");
		scanf("%s", &c);
		printf("c= %c\n", c);
	}
    // -----
    printf("- Uso de DO-WHILE -\n");
	do {
		printf("Ingresa un caracter: ");
		scanf("%s", &c);
		printf("c= %c\n", c);
	} while (c != 'e');

	return 0;
}