#include <stdio.h>

float fahrcel(float f){
	return ((5*(f+32))/9);
}

int main(){
	float t;
	printf("Digite a temperatura em fahrenheit\n");
	scanf("%f", &t);
	printf("%f", fahrcel(t));
	return 0;
}
