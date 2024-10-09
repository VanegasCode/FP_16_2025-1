#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char c;
	char cadena[15];
	// Recibir un carácter
	printf("Escribe una letra: ");
	c = getchar(); // Lee un carácter
	printf("Eco: ");
	putchar(c); // Escribe un carácter
	c = getchar(); // Esto evitará que el carácter nulo '\0' se lea en scanf
	printf("\nNuevamente escriba un caracter: ");
	scanf("%c", &c); // Lee un carácter
	printf("Eco: %c\n", c);

	// Recibir una cadena
	printf("\nEscribe una cadena sin espacios: ");
	scanf("%s", cadena); // No tiene &
	printf("%s\n", cadena);
	c = getchar(); // Esto evitará que el carácter nulo '\0' se lea en scanf
	printf("Nuevamente escriba una cadena: ");
	gets(cadena);
	printf("cadena leida: %s\n\n", cadena);

	system("pause");
	exit(0);
}