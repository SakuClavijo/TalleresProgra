#include <stdio.h>

int esPrimo(int n){
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
	

int main(){
	
	int num, sum = 0;
	
	printf("Ingrese un numero:\n ");
	scanf("%d", &num);
	
	while(num != 0){
		sum += num % 10;
		num /= 10;
	}
	
	if(esPrimo(sum)){
		printf("La suma de los digitos es un numero primo\n ", sum);
	}else {
		printf("La suma de los digitos no es un numero primo\n ", num);
		
	}
	return 0;
}
