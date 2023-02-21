#include <stdio.h>

int main(){
	
	int sum = 0;
	
	printf("Los primeros multiplos de 20 de 3 son:\n ");
	for(int i = 1, contar = 0; contar < 20; i++){
		if(i % 3 == 0){
			sum += i;
			contar++;
		}
	}
	
	printf("La suma de los primeros 20 multiplos de 3 es: %d\n", sum);
	
	return 0;
	
}

