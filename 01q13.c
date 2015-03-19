#include <stdio.h>

float notacompeso(float a, int p, float b, int q, float c, int r){
	return (((a*p)+(b*q)+(c*r))/10);
}

int main(){
	float n1, n2, n3;
	int p1, p2, p3;
	scanf("%f %f %f", &n1, &n2, &n3);
	scanf("%d %d %d", &p1, &p2, &p3);
	printf("%f\n", notacompeso(n1, p1, n2, p2, n3, p3));
	return 0;
}
