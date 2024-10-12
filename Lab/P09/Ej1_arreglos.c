#include <stdio.h>

int main() {
	int *p1, *p2; // puntero de tipo entero                                                            
	int arreglo[5] = {1, 2, 3, 4, 5}; // arreglo de tipo entero
	
	for (int i = 0; i < 5; i++)
		printf("arreglo[%d]: %d\n", i, arreglo[i]);

	// & es el operador dirección
	p1 = &arreglo[0]; // p1 apunta a la primer elemento del arreglo 
	p2 = arreglo; // p2 apunta a la dirección del arreglo
	printf("La direcci%cn de memoria de \'arreglo\' es: %p\n", 162, arreglo); // 162= ó
	// p1 tiene su propia dirección de memoria y es diferente a la del arreglo
	printf("\nLa direcci%cn de p1 es: %p \n", 162, &p1);
	
	printf("\nPara apuntar a una variable se realiza de la siguiente manera\n");
	printf("p1 = &arreglo[0]; p1 apunta a la direcci%cn de \'arreglo\' \n", 162);
	// p1 = la dirección de memoria de arreglo
	printf("p1 apunta a -> %p\n", p1);

	// *p1: muestra el contenido de la variable a la que apunta p1
	printf("\nescribir *p1 muestra el contenido de la variable a la que apunta p1\n");
	printf("*p1: %d\n\n", *p1); // * es el operador indirección                                       
	
	// ---------------------------
	printf("-- Modificar valores --\n");
	arreglo[0] = 25;
	printf("arreglo[0]= %d;\n", arreglo[0]);
	// la direccion de p1 es fija, es la dirección de arreglo[0]
	printf("*p1: %d\n\n", *p1); 

	*p1 = 100; //accediendo al valor
	printf("*p1 = 100; modifica el contenido de la variable a la que apunta\n");
	printf("*p1: %d\n", *p1);
	for (int i = 0; i < 5; i++)
		printf("arreglo[%d]: %d\n", i, arreglo[i]);

	return 0;
}
