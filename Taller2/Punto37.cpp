#include <stdio.h>

int main(){
	
	int num1, num2;
	for(num1 = 1; num1 <= 10; num1++){
		printf("Tabla del %d\n ", num1);
		for(num2 = 1; num2 <= 10; num2++){
			printf("%d x %d = %d\n ", num1, num2, num1 * num2);
			
		}
		printf("\n");
	}
	
	return 0;
}
