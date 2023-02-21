#include <stdio.h>

int main(){
	
	int num = 10;
	int a = 1, b = 1;
	
	for(int i = 0; i < num; i++){
		printf("%d %d\n", i, a);
		
		if(i % 2 == 0){
			b++;
			
		}else {
			a = b;
			
		}
	}
	return 0;
}
