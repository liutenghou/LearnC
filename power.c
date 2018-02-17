#include <stdio.h>
#include <stdbool.h>

//prototypes
void doPower(int *resultPtr, int base, int exponent);

//global
int gPrintTraceInfo;

int main(void){
	int power;
	gPrintTraceInfo = true;

	if(gPrintTraceInfo){
		printf("---> Starting main() ...\n");
	}

	doPower(&power, 2, 5);
	doPower(&power, 3, 4);
	doPower(&power, 5, 3);

	if(gPrintTraceInfo){
		printf("---> Leaving main()...\n");
	}

	return 0;
}

void doPower(int *resultPtr, int base, int exponent){
	int i;
	if(gPrintTraceInfo){
		printf("\t---> Starting doPower()...\n");
	}

	*resultPtr = 1;
	for(i=1; i<=exponent; i++){
		*resultPtr *= base;
	}
	printf("%d to the %drd = %d.\n", base, exponent, *resultPtr);
	
	if(gPrintTraceInfo){
		printf("\t---> Leaving doPower()...\n");
	}
}


