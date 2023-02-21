#include <stdio.h>

int main(){
	
	int num, sum = 0;
	
	printf("Ingresa un numero:\n");
	scanf("%d", &num);
	
	for(int i = 1; i <= num; i++){
		sum += i;
	}
	
	printf("La suma de los numeros entre 1 y %d son: %d\n", num, sum);
	
	return 0;

}
