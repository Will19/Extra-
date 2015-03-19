#include <stdio.h>

int lados(int i){
	return 2*i*i;
}

int main(){
	int l;
	scanf("%d", &l);
	printf("%d\n", lados(l));
	return 0;
}
