#include <stdio.h>

float media4(float a, float b, float c, float d){
	return ((a+b+c+d)/4);
}

int main(){
	float n1, n2, n3, n4;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	printf("%f\n", media4(n1, n2, n3, n4));
	return 0;
}
