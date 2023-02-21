#include <stdio.h>

int main(){
	int num, digito1, digito2;
	
	printf("Ingresa un numero de dos digitos:\n");
	scanf("%d", &num);
	
	digito1 = num % 10;
	digito2 = num / 10;
	
	printf("Los numeros entre %d y %d son: ", digito1, digito2);
	if(digito1 < digito2){
		for(int i = digito1; i <= digito2; i++){
			printf("%d ",i);
		}
	} else{
		for(int i = digito2; i <= digito1; i++){
			printf("%d ",i);
		}
	}
	
	printf("\n");
	
	return 0;
	
}
