#include <stdio.h>

float valorhora(){
	float f;
	int i;
	printf("Digite o valor ganho por hora\n");
	scanf("%f", &f);
	printf("Digite o numero de horas\n");
	scanf("%d", &i);
	return (f*i);
}

int main(){
	printf("%f\n", valorhora());	
	return 0;
}
