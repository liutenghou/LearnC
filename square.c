#include <stdio.h>

void SquareIt(int number, int *squarePtr);

int main(void){
	int square;
	SquareIt(5, &square);
	printf( "5 squared is %d.\n", square);
	return 0;
}

void SquareIt(int number, int *squarePtr){
	*squarePtr = number * number;
}
