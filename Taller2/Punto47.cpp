#include <stdio.h>

int factorial(int num){
	
	if(num == 0){
		return 1;
		
	}else{
		return num * factorial(num - 1);
		
	}
}

int main(){
	
	int num, i;
	int sum = 0;
	
	printf("Ingresa un numero:\n ");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++){
		sum += factorial(i);
	}
	printf("La suma de los factoriales es: %d\n ", sum);
	
	return 0;
}
