#include <stdio.h>

float altsal(float f){
	f*=1.05;
	f*=0.93;
	return f;
}

int main(){
	float s;
	scanf("%f", &s);
	printf("%f\n", altsal(s));
	return 0;
}
