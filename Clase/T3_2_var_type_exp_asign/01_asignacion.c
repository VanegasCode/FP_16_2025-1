#include<stdio.h>

void increment();

int main()
{
	// Declaración de variables
	int variableEntera;
	float variableFlotante;
	double variableDoble;
	char variableCaracter;

	// Declaración múltiple
	int a = 1, b = 3, c = 30; 
	
	printf("a= %d, b= %d, c=%d\n", a, b, c);
	
	// Asignación de valores en las variables ( inicialización )
	variableEntera = 10;
	variableFlotante = 6.5;
	variableDoble = 2.8e4;
	variableCaracter = 'h';
	
	// Asignación mútiple
	a = b = c = 0;
	printf("a= %d, b= %d, c=%d\n\n", a, b, c);

	printf("variableEntera= %d\n", variableEntera);
	printf("variableFlotante= %f\n", variableFlotante);
	printf("variableDoble= %.3e\n", variableDoble);
	printf("variableCaracter= %c\n", variableCaracter);
	
	printf("\nstatic:\n");
	increment();
	increment();
	increment();
	printf("\n");
	
	return 0;
}

void increment() // Static/Const 
{
	static int contador = 0; // usar static
	contador++;  // + 1
	printf("contador: %d\n", contador);
}