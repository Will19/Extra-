#include <stdio.h>

int soma(int i, int j){
	return i+j;
}

int main(){
	int x, y;
	printf("Digite dois numeros\n");
	scanf("%d %d", &x, &y);
	printf("%d\n", soma(x, y));
	return 0;
}
