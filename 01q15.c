#include <stdio.h>

float aumento(float f, int i){
	float m;
	m=i+100;
	m/=100;
	return (m*f);
}

int main(){
	float s;
	int p;
	scanf("%f", &s);
	scanf("%d", &p);
	printf("%f\n", aumento(s, p));
	return 0;
}
