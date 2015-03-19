#include <stdio.h>

int parimp(int i){
	if (i%2==0)
		printf("Par\n");
	else
		printf("Impar\n");
}

int main(){
	int k;
	scanf("%d", &k);
	parimp(k);
}
