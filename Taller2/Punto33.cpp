#include <stdio.h>


int numeroPrimo(int num){
	if(num < 2){
		return 0;
		
	}
	for(int i = 2; i <= num / 2; i++){
		if(num % i == 0){
			return 0;
			
		}
	}
	return 1;
}

int main(){
	
	int num1 = 32768;
	int primoCercano = 2;
	
	for(int i = 3; i < num1; i += 2){
		if(numeroPrimo(i)){
			primoCercano = i;
		}
	}
	
	printf("El numero primo mas cercano de %d es: %d\n ",num1, primoCercano);
	
	return 0;
}
