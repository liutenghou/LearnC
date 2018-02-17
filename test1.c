#include <stdio.h>

unsigned int biggestInt = 65535;
int positiveBiggest = 32767;
int negativeBiggest = -32768;
int overBig = 65536;
int *overBigPointer = &overBig;

void sayHello(void);

int main(void){
	sayHello();
	sayHello();
	sayHello();
	printf("address of overBig: %d\n", &overBig);
	printf("size of overBigPointer: %d\n", sizeof(*overBigPointer));
	printf("biggestInt: %i, positiveBiggest: %i, negativeBiggest = %i, overBig: %i\n", biggestInt, positiveBiggest, negativeBiggest, overBig);
	printf("Hello World\n");
	return 0;
}

void sayHello(void){
	printf("Hello from sayHello\n");
}
