#include <stdio.h>

int main(){
	
	int num1 = 0, num2 = 1, sum = 0, fibo = 0;
	while(fibo <= 100){
		fibo = num1 + num2;
		if(fibo >= 0 && fibo <=100){
			sum += fibo;
			
		}
		num1 = num2;
		num2 = fibo;
	}
	
	printf("La suma de los numeros de la serie Fibonacci entre el 0 al 100 son: %d\n ", sum);
	return 0;
}
