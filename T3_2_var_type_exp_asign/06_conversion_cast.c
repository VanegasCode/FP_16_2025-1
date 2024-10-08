#include<stdio.h>

int main() {
	int varEntero = 6;
	double varDoble = 20.0;

	printf("size\t | type\t\t | value\n");
	printf("________________________________\n");
	printf("%d bytes\t | int\t\t | %d\n", sizeof(varEntero), varEntero);
	printf("%d bytes\t | double\t | %g\n", sizeof(varDoble), varDoble);
	// varEntero se convierte en double antes de sumar
	varDoble = varDoble + varEntero;
	printf("\nvarDoble + varEntero = %.2f\n", varDoble);
	
	varDoble = varEntero / 5; // cambiar a 5.
	printf("\nvarEntero / 5 = %f\n", varDoble);
	
	varDoble = (float)varEntero / 5; // cast
	printf("\n(float)varEntero / 5 = %f\n", varDoble);
	
	varDoble = 20.5;
	varEntero = 2 + (int)varDoble;
	printf("\n2 + (int)varDoble = %d\n\n", varEntero);

	return 0;
}