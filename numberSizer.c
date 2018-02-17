#include <stdio.h>

int main(void){
	float myFloat;
	double myDouble;
	long double myLongDouble;

	myFloat = 12345.67890123456789;
	myDouble = 12345.67890123456789;
	myLongDouble = 12345.67890123456789;

	printf("sizeof(float) = %d\n", (int)sizeof(float));
	printf("sizeof(double) = %d\n", (int)sizeof(double));
	printf("sizeof(long double) = %d\n\n", (int)sizeof(long double));

	printf("myFloat = %25.16f\n", myFloat);
	printf("myDouble = %25.16f\n", myDouble);
	printf("myLongDouble = %25.16f\n", myLongDouble);
	
	// different modifiers
	printf("myFloat = %10.1f\n", myFloat);
	printf("myFloat = %.2f\n", myFloat);
	printf("myFloat = %.12f\n", myFloat);
	printf("myFloat = %.9f\n\n", myFloat);
	
	short int myShortInt;
	long int myLongIntInt;

	printf("sizeof(char) = %d\n", (int)sizeof(char));
	printf("sizeof(short int) = %d\n", (int)sizeof(short int));
	printf("sizeof(int) = %d\n", (int)sizeof(int));
	printf("sizeof(long int) = %d\nn", (int)sizeof(long int));
	
	return 0;
}
