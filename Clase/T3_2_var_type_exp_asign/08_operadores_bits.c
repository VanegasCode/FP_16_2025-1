#include<stdio.h>

int main() {
	int a = 16, b = 8;

	printf("a: %d, ~a:%d\n", a, ~a);
	printf("8 >> 2: %d\n", b >> 2);
	printf("8 << 1: %d\n", b << 1);
	// AND
	a = 4, b = 5;				  //5: 1001
	printf("5 & 4: %d\n", b & a); //4: 1000

	// XOR: iguales=0, diferentes=1
	b = 12;						  //12: 1100
	printf("4 ^ 8: %d\n", a ^ b); // 4: 0100

	// OR
	a = 3, b = 2;				  //b 2: 0010
	printf("3 | 2: %d\n", a | b); //a 3: 0011

	// A ^ B & A
	printf("a ^ b & a: %d\n", a ^ b & a);

	return 0;
}