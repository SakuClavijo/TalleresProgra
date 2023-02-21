#include <stdio.h>

int main(){
	
	int num1, num2;
	int digito1 = 0, digito2 = 0;
	int contar;
	
	printf("Ingresa dos numero:\n ");
	scanf("%d %d", &num1, &num2);
	
	contar = num1;
	do{
		digito1++;
		contar /= 10;
	}while(contar != 0);
	
	contar = num2;
	do{
		digito2++;
		contar /= 10;
	}while(contar != 0);
	
	
	if(digito1 >  digito2){
		printf("El primer numero tiene mas digitos.\n ");
		
	}else if(digito1 < digito2){
		printf("El segundo numero tiene mas digitos.\n ");
		
	}else if(digito1 == digito2){ 
	
		printf("Ambos numero tiene la misma cantidad de digitos.\n");
	
		return 0;
	}
}
 

