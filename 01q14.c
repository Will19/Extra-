#include <stdio.h>

float salario(float f){
  return ((1.25)*f);
}

int main(){
	float s;
	scanf("%f", &s);
	printf("%f\n", salario(s));
	return 0;
}
