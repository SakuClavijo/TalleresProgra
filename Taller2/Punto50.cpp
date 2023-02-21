#include <stdio.h>

int main(){
	
	int x = 8;
	int y = 1;
	
	for(int i = 0; i < x; i++){
		printf("%d %d\n", i, y);
		if(i % 4 == 3){
			y++;
		}
	}
	return 0;
}
