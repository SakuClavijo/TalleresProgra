#include <stdio.h>

int main(){
	
	int num1 = 0, num2 = 1, sum = 0;
	
	printf("%d, %d", num1, num2);
	
	while(sum <= 10000){
		sum = num1 + num2;
		printf(", %d", sum);
		
		num1 = num2;
		num2 = sum;
	}
	
	return 0;
}
