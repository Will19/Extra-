#include <stdio.h>

float convertecm(float f){
	return (f/100);
}

int main(){
	float v;
	scanf("%f", &v);
	printf("%f\n", convertecm(v));
	return 0;
}
