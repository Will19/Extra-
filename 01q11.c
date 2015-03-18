#include <stdio.h>

int main(){
	float t;
	printf("Digite a temperatura em fahrenheit\n");
	scanf("%f", &t);
	printf("%f", ((5*(t+32))/9));
	return 0;
}
