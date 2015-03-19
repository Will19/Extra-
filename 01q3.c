#include <stdio.h>

void informanum(){
	int x;
	printf("Digite um numero\n");
	scanf("%d", &x);
	printf("O numero informado foi %d\n", x);	
}

int main(){
	informanum();
	return 0;
}
