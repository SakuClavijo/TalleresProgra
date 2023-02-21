#include <stdio.h>

int main(){
	int num1, num2, mayor, menor;
	
	printf("Ingresa el primer numero:\n ");
	scanf("%d", &num1);
	printf("Introduce el segundo numero:\n" );
	scanf("%d", &num2);
	
	if(num1 < num2){
		menor = num1;
		mayor = num2;
	}else {
		menor = num2;
		mayor = num1;
	}
	for(int i = menor; i <= mayor; i++){
		if(i % 5 == 0){
			printf("Los multiplos son: %d\n", i);
		}
	}
	
	return 0;
}
