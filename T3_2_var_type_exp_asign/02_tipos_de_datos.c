#include <stdio.h>

int main()
{
	char character = 'C';  // 1 Byte
	short shortInt = 32767;  // 2 Bytes
	int number = -2147483648;	   // 4 Bytes
	unsigned int unsignedNumber = 4294967295; // 4 Bytes
	long largeNumber = 2147483647; // 4 Bytes
	float realNumber = 3.007;	   // 4 Bytes
	double largeFloat = 0.0000000045;   // 8 Bytes
	long long int veryLargeInt = 9223372036854775807;

	// Types of data table
	printf("size\t | type\t\t | value\n");
	printf("________________________________\n");
	// Char
	printf("%d bytes\t | char\t\t | %c\n", sizeof(character), character);
	// Integers
	printf("%d bytes\t | short\t | %d\n", sizeof(shortInt), shortInt);
	printf("%d bytes\t | int\t\t | %d\n", sizeof(number), number);
	printf("%d bytes\t | unsigned int\t | %u\n", sizeof(unsignedNumber), unsignedNumber);
	printf("%d bytes\t | long\t\t | %i\n", sizeof(largeNumber), largeNumber);
	// Real
	printf("%d bytes\t | float\t | %f\n", sizeof(realNumber), realNumber);
	printf("%d bytes\t | double\t | %g\n", sizeof(largeFloat), largeFloat);
	// 64 bites
	printf("%d bytes\t | long long int | %lli\n\n", sizeof(veryLargeInt), veryLargeInt);

	return 0;
}