#include <stdio.h>

int main(){
	
	int num;
	printf("Ingresa un numero de tres digitos: ");
	scanf("%d", &num);
	
	int digito1 = num / 100;
	int digito2 = (num / 10) % 10;
	int digito3 = num % 10;
	
	printf("Los numeros entre 1 y %d son:\n", digito1);
	for(int i = 1; i <= digito1; i++){
		printf("%d ", i);
	}
	
	printf("\n");
	
	printf("Los numeros entre 1 y %d son:\n", digito2);
	for(int i = 1; i <= digito2; i++){
		printf("%d ", i);
	}
	
	printf("\n");
	
	printf("Los numeros entre 1 y %d son:\n", digito3);
	for(int i = 1; i <= digito3; i++){
		printf("%d ", i);
	}
	
	printf("\n");
	
}
