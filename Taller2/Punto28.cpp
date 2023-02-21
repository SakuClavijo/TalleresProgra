#include <stdio.h>


	
	int numeroPrimo(int n){
		if(n <= 1){
			
		return 0;
		}
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
		
		return 0;
			}
		}
		return 1;
	}
	
	int cantDigitoPrimo(int n){
		int contar = 0;
		
		while(n > 0){
			int num = n % 10;
			if(numeroPrimo(num)){
				contar++;
			}
			n /=10;
		}
		return contar;
	}
	
	int main(){
		
		int num1, num2;
		
		printf("Ingresa un numero:\n ");
		scanf("%d", &num1);
		printf("Ingresa otro numero:\n ");
		scanf("%d", &num2);
		
		int digitoPrimo1 = cantDigitoPrimo(num1);
		int digitoPrimo2 = cantDigitoPrimo(num2);
		
		if(digitoPrimo1 > digitoPrimo2){
			printf("El primer numero tiene mas digitos primos.\n");
			
		}else if(digitoPrimo1 < digitoPrimo2){
			printf("El segundo numero tiene mas digitos primos.\n");
			
		}else if(digitoPrimo1 == digitoPrimo2){
			printf("Ambos numeros tienen la misma cantidad de primos\n");
			
		}
		return 0;
		
	}
