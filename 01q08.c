#include <stdio.h>

float arearaio (float i){
	return (3.141592)*(i*i);
}

int main(){
	float r;
	scanf("%f", &r);
	printf("%f\n", arearaio(r));
	return 0;
}
