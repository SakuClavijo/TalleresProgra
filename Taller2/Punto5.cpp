#include <stdio.h>

int main(){
	int num1, num2;
	
	printf("Ingresa dos numeros enteros: ");
	scanf("%d %d", &num1, &num2);
	
	printf("Los numeros terminados en 4 entre %d y %d son:\n", num1, num2);
	if(num1 < num2){
		for(int i = num1; i <= num2; i++){
			if(i % 10 == 4){
				printf("%d ", i);
			}
		}
	} else{
		for(int i = num2; i <= num1; i++){
			if(i % 10 == 4){
				printf("%d ", i);
			}
		}
	}
	printf("\n");
	
	return 0;
}
