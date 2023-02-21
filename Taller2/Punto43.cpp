#include <stdio.h>

int main(){
	
	int num1 = 0, num2 = 1, actual = 1, contar = 0;
	
	while(actual <= 2000){
		if(actual >= 1000 && actual <= 2000){
			contar++;
		}
		
		num1 = num2;
		num2 = actual;
		actual = num1 + num2;
	}
	
	printf("Los numeros de la serie Fibonacci entre el 1000 y 2000 es: %d\n ", contar);
	return 0;
}
