#include <stdio.h>

int main(){
	
	int i, j;
	
	for(i = 1; i <= 3; i++){
		for(j = 1; j <= 3; j++){
			printf("%d %d %d\n", (i-1)*3+j, i, ((i-1)*3+j-1)%3+1);
		}
	}
	return 0;
}
