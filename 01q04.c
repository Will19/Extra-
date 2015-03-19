#include <stdio.h>

int soma(int a, int b, int c, int d){
	return a+b+c+d;
}

int main(){
	int x, y, z, w;
	scanf("%d %d %d %d", &x, &y, &z, &w);
	printf("%d\n", soma(x, y, z, w));
	return 0;
}
