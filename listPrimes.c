#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// prototypes
bool isItPrime(int candidate);

int main(void){
    int i;
    for(i=1; i<=1000; i++){
        if(isItPrime(i)){
            printf("%d\n", i);
        }
    }
    return 0;
}

bool isItPrime(int candidate){
    int i, last;
    if(candidate < 2){
        return false;
    }else{
        last=sqrt(candidate);
        for(i=2; i<=last; i++){
            if((candidate%i)==0){
                return false;
            }
        }
    }
    return true;
}

