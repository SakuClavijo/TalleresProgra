#include <stdio.h>

int main(){
	
	int num, a = 0, b = 1, c;
	
	printf("Ingresa un numero de dos cifras:\n ");
	scanf("%d", &num);
	
	while(b < 100){
		c = a + b;
		a = b;
		b = c;
		
		if(num == b){
			printf("El numero %d pertenece a la serie de Fibonacci.\n", num);
			return 0;
		}
	}
	printf("El numero %d no pertenece a la serie de Fibonacci.\n ",num);
	return 0;
	
}
