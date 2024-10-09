#include<stdio.h>

int main() {
	char caracter = 'a';
	float varFloat = 8.3;
	int varEntero = 10;

	printf("caracter: %c\n", caracter);
	caracter -= 32;
	printf("caracter: %c\n\n", caracter);

	printf("varEntero: %d\n", varEntero);
	varEntero *= 5;
	printf("varEntero *= 5: %d\n\n", varEntero);
	
	printf("(int)varFloat: %d\n", (int)varFloat); // (int) 8.3
	varEntero = 10;
	varEntero %= (int)varFloat;
	printf("varEntero %= (int)varFloat: %d\n", varEntero); // 10 % 8

	return 0;
}