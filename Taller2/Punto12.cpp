#include <stdio.h>

int main(){
	
	int num, digito1, digito2, digito3;
	
	printf("Ingresa un numero de tres digitos: \n");
	scanf("%d", &num);
	
	digito1 = num % 10;
	digito2 = (num / 10) % 10;
	digito3 = num / 100;
	
	if(digito1 == 1 || digito2 == 1 || digito3 == 1){
		printf("El numero %d tiene el digito 1.\n", num);
	} else{
		printf("El numero %d no tiene el digito 1.\n", num);
	}
	
	return 0;
}
