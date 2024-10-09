#include <stdio.h>
int main()
{
	char c;

	printf("- Uso de WHILE -\n");
	printf("Ingresa un caracter: ");
	scanf("%c", &c);
	printf("c= %c\n", c);
	while (c != 'e') 
	{
		setbuf(stdin, NULL); // limpia el buffer del teclado
		printf("Ingresa un caracter: ");
		scanf("%c", &c);
		printf("c= %c\n", c);
	}
    // -----
    printf("- Uso de DO-WHILE -\n");
	do {
		printf("Ingresa un caracter: ");
		scanf("%c", &c);
		printf("c= %c\n", c);
		setbuf(stdin, NULL); // limpia el buffer del teclado
	} while (c != 'e');

	return 0;
}