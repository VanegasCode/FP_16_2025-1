#include<stdio.h>
#define enie 164

int main()
{
	char acentos[] = { 160, 130, 161, 162, 163 }; // á, é, �, �, �
	char cadena[] = "Esta es una cadena"; 
	int tam;
	// Una cadena de texto tiene el car�cter nulo (\0) al final
	printf("cadena[]: %s\n", cadena);
	tam = sizeof(cadena);
	printf("El tama%co de la cadena es: %d\n", enie, tam);
	
	printf("\n - cadena char -\n");
	printf("La direcci%cn de memoria de la variable cadena es: ", acentos[3]);
	printf("%p\n", cadena);

	for (int i = 0; i < sizeof(cadena); i++)
	{
		// & es el operador de direcci�n, sirve para mostrar la direcci�n de la variable
		printf("La direcci%cn de memoria del elemento cadena[%d]", acentos[3], i);
		printf(" es: %p ", &cadena[i]);
		printf(" y contiene el car%ccter: %c", acentos[0], cadena[i]);
		if (cadena[i] == '\0') // Validamos que existe el car�cter nulo
			printf("\\0\n"); // Mostramos el car�cter \0
		else
			printf("\n");
	}

	return 0;
}