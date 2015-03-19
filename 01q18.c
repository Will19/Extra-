#include <stdio.h>

float areatr(int a, int b){
	return ((a*b)/2);
}

int main(){
	int b, h;
	scanf("%d %d", &b, &h);
	printf("%f\n", areatr(b, h));
	return 0;
}
